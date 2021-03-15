#include <bits/stdc++.h>
using namespace std;
 int minCostClimbingStairs(vector<int>& cost) {
        
        int n=cost.size();
        

        int l=cost[0],r=cost[1],temp=0;
        for (int i=2;i<n;i++)
        {
            temp=r;
            r=min(l,r)+cost[i];
            l=temp;
        }
        return min(l,r);
    }

int main()
{
	vector <int> v={15,1,1};
	cout<<minCostClimbingStairs(v)<<endl;

	return 0;
}


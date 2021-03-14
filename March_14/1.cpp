#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;

int trap(vector<int> height) 
   {
        int n=height.size();
        if (n==0)
            return 0;

        vector<int> left(n),right(n);
        left[0]=height[0];
        right[n-1]=height[n-1];
        int trap_water=0;
        for(int i=1;i<n;i++)
        {
            left[i]=max(height[i],left[i-1]);
        }
        for(int i=n-2;i>-1;i--)
        {
            right[i]=max(height[i],right[i+1]);
        }
        for (int i=0;i<n;i++)
        {
            trap_water+=(min(left[i],right[i])-height[i]);
        }
        return trap_water;
    }

int main()
{
	vector<int> v={4,2,0,3,2,5};
	cout<<trap(v)<<endl;
	vector<int> v0={};
	cout<<trap(v0)<<endl;

}
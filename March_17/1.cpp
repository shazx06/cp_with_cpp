#include <bits/stdc++.h>
using namespace std;


bool canJump(vector<int>& nums) 
{
    int max_reach=0, n=nums.size();
    for (int i=0;i<n;i++)
    {
        if (max_reach < i)
            return false;
        max_reach=max(max_reach,i+nums[i]);
        
    }
    return true;
    
}

int main()
{
	vector<int> v={3,2,1,0,4};
	cout<<canJump(v)<<endl;
}
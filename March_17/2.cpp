#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {
    unordered_map <int , int > map;
    int n=nums.size();
    for (int i=0;i<n;i++)
    {
       int comp=target-nums[i];
        if (map.find(comp)!=map.end())
        {
            return {i , map[comp]};
        }
        map[nums[i]]=i;
    }
return {0,0};
}


int main()
{   vector<int> v= {3,2,4};
	vector<int> res=twoSum(v,6);
	for (int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
	cout<<endl;
}
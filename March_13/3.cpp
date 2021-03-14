#include <bits/stdc++.h>
using namespace std;
int find(int n, vector<int> arr)
	{
	for(int i = 0; i < arr.size(); i++)
	{
	if(arr[i] == n)
	return 1;
	}
	return 0;
	}
int firstMissingPositive(vector<int>nums) 
{
    if(nums.size() == 0)
        return 1;
    if(nums.size() == 1)
    {
        if(nums[0] == 1)
            return 2;
        else 
            return 1;
    }
    int i;
    for( i = 0; i < nums.size(); i++)
    {
       if(find(i + 1, nums) == 0 && (i + 1) != 0)
           return i + 1;
    }
   return nums.size() + 1; 
}

int main()
{
cout<<firstMissingPositive({7,8,9,11,12});
}
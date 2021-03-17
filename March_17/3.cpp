#include <bits/stdc++.h>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int j=0;
    if (nums.size()==0) return 0;
    for (int i=1;i<nums.size();i++)
        
    {
        if (nums[j]!=nums[i]) 
        {j++;
            nums[j]=nums[i];
        }

    }

    return ++j;
}
int main()
{
	vector<int> v={1,2,2,3,3,3,3,3,3};
	cout<<removeDuplicates(v);
}
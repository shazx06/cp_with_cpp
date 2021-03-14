#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int jump(vector <int> nums)
{
	int n=nums.size();
	if (n<2) return 0;
	int step=1,max_reach=nums[0],check=nums[0];
	for (int i=0;i<n;i++)
	{
		if(i>check)
		{	step++;
			check=max_reach;
		}
		max_reach=max(max_reach,i+nums[i]);



	}
	return step;


}


int main()
{
  vector<int> v={2,3,1,1,4};
cout<<jump(v);
}
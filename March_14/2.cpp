#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int max_water(vector<int> heigt)
{
	int l=0,r=heigt.size()-1,max_water=0,k=0;
	while (l<r)
	{
		k=min(heigt[l],heigt[r])*(r-l);
		if (k>max_water) max_water=k;
		if (heigt[l]>heigt[r])
		{
			r--;
		}
		else
		{
			l++;
		}

	}
	return max_water;

}





int main()
{
  vector<int> v={4,3,2,1,4};
  cout<<max_water(v);

}

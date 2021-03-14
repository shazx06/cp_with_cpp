#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{



	 vector<int> v={1,3,5};
	 vector<int> v1={2};
	 v.insert(v.end(),v1.begin(), v1.end());
	 sort(v.begin(),v.end());

	 int n=v.size();
	 if (n%2==0)
	 {
	 	cout<<(double)(v[n/2-1]+v[n/2])/2<<endl;

	 }
	 else
	 	cout<<v[n/2]<<endl;

}
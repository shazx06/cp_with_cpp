#include<iostream>
using namespace std;

int main()
{
	int arr[6]={4,-3,-1,1,-2,-1};
	int sum=arr[0];
	for (int i=1; i<6 ; i++)
	{

		if (sum==0)
		{
			cout << "True at index "<<i-1 ;
		    break;
		}

		sum=sum+arr[i];

	}
    cout<<endl;
	return 0;
}
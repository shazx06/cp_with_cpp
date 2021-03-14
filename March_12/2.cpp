#include <iostream>
using namespace std;

void profit(int arr[] , int n)
{
	int profit=0;
	for (int i=1; i<n ; i++)
	{ 
		if (arr[i]>arr[i-1])
			profit+=arr[i]-arr[i-1];

	}
	cout<<"profit is : "<<profit<<endl;
}

int main()
{
	int arr[]={1, 5, 2, 3, 7, 6, 4, 5};
	int n=sizeof(arr)/sizeof(int);
	profit(arr, n);
	int arr2[]={10, 8, 6, 5, 4, 2};
	n=sizeof(arr2)/sizeof(int);
	profit(arr2,n);




}
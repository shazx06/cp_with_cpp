#include <iostream>
using namespace std;

void printarray(int arr[], int n)
{

    for (int i=0 ; i<n ; i++)
    {

        cout<<arr[i]<<" ";
    }
}

int main()
{
	int arr[6]={0,1,2,0,0,3};
	int n=sizeof(arr)/sizeof(int);
	int j=0,var=0;

    for (int i=0; i<n;i++)

	{
		if(arr[i]!=0)
		{
            var=arr[i];
            arr[i]=arr[j];
            arr[j]=var;

            j++;
		}
		
	}
printarray(arr , n);
}
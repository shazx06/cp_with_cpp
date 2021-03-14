#include <iostream>

using namespace std;
void print_array(int arr[] , int i , int j)

{   
	for ( int a=i; a<=j; a++)
		cout<<arr[a]<<" ";
	cout<<endl;	 

}

int main()
{
	int arr[7]={0,4,2,1,-2,1,1};
	int max=0, i1=0,j1=0;
	for (int i=0; i<7;i++)
	 {
	 	int sum=0;
	 	for (int j=i; j<7;j++)
	 	{
	 		sum=sum+arr[j];
	 		if (sum==7)

	 		{ 
	 			if (max < j-i)
	 			{
	 			   max=j-i;
	 			   i1=i;j1=j;
	 			}
	 		}
	 	}

	 }
cout <<"max subarray found ";
print_array(arr, i1, j1);

}
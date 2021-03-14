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
	int arr[10]={3,4,-7,3,1,3,1,-4,-2,-2};
	int max=0, i1=0,j1=0;
	for (int i=0; i<10;i++)
	 {
	 	int sum=0;
	 	for (int j=i; j<10;j++)
	 	{
	 		sum=sum+arr[j];
	 		if (sum==0)
	 		{
	 			cout <<"subarray found ["<<i<<".."<<j<<"]"<<endl;
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
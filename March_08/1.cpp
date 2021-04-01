#include<iostream>
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

    int arr[6]= {1,2,3,4,5,6};
    int j = sizeof(arr)/sizeof(int)-1, var= 0,n=j+1;

    int i=0;
    while (i<j)
    {
        var=arr[i];
        arr[i]=arr[j];
        arr[j]=var;
        j--;
        i++;
    }
    // cout<<n;
    printarray(arr,n );
    return 0;
}

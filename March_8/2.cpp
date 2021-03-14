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

    int arr[6]= {-2,-1,90,-8,5,6};
    int size= sizeof(arr)/sizeof(int), var=0;
    int j=size-1,i=0;
    while (i<j)
    {

        if (arr[i]<0)
        {
            var=arr[i];
            arr[i]=arr[j];
            arr[j]=var;

            j--;
        }
        i++;
    }
    printarray(arr,size);

}

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
    int arr0[6]= {2,4,5,7,8,9};

    int i=0,j=0;
    cout<< "union ";
    while(i<6 && j<6)
    {
        if(arr[i] <arr0[j])
        {
            cout <<arr[i]<<" ";
            i++;
        }
        else if (arr[i]>arr0[j])
        {
            cout <<arr0[j]<<" ";
            j++;

        }
        else
        {
            cout <<arr[i]<<" ";
            i++;
            j++;
        }
    }

    while (i < 6)
    {
        cout<<arr[i]<<" ";
        i++;

    }
    while (j < 6)
    {
        cout<<arr0[j]<<" ";
        j++;

    }


    cout<<endl;
    i=0;
    j=0;
    cout <<"intersection ";

    while (i<6 && j<6)
    {
        if (arr[i]==arr0[j])
        {
            cout <<arr[i]<<" ";
            i++;
            j++;
        }
        else if (arr[i]<arr0[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }



}


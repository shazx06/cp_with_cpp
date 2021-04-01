#include<bits/stdc++.h>
using namespace std;

int main()
{
    //sort the array I'm using already sorted array.
    int arr[6]= {1,2,3,4,5,7};
    int i=0,j=5;
    while(i<j)
    {
        if (arr[i]+arr[j]==9)
        {
            cout<<"Match found at index "<<i<<","<<j<<endl;
            i++;
            j--;
        }
        else if (arr[i]+arr[j]>9)
        {
            j--;

        }
        else
        {
            i++;
        }
    }



}


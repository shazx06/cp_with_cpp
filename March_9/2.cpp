#include<iostream>
using namespace std;

int main()
{
    int arr[12]={1,2,3,2,4,5,6,2,7,8,1,9};
    int to_find=2,st=-1,lt=-1;
    for (int i=0; i<12;i++)
    {
        if (arr[i]==to_find)
        {
            lt=i;
            if (st==-1)
                st=i;
        }
    }
    cout<<"First occurance at index "<< st<<" and last at "<<lt<<endl;
}

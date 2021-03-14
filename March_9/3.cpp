#include<iostream>

using namespace std;

int main()

{
    int arr[7]= {1,3,2,6,9,8,4};
    int max_sum=0;
    int i=0,j=6,i1=0,i2=0;
    while (i<j)
    {
        if (arr[i]+arr[j]>max_sum)
        {
            i1=i;
            max_sum=arr[i]+arr[j];
            i2=j;

        }
        if (arr[i]>arr[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout <<i1<<" "<<i2<<" "<<max_sum<<endl;

}

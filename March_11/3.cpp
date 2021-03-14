#include <iostream>
using namespace std;

int main()
{
    int arr[]= { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };
    int n=sizeof(arr)/sizeof(int);
    int count=0,max_index=-1,prev_index=-1, max_count=0;

    for(int i=0; i<n ; i++)
    {
        if (arr[i]==1)
        {
            count++;
        }
        else
        {
            count=i - prev_index;
            prev_index= i;

        }
        if ( count> max_count)
        {
            max_count=count;
            max_index=prev_index;
        }
    }
    cout<<max_index;
}

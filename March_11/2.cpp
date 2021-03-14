#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[]= { 0, 0, 1, 0, 1, 0, 0 };
    int n=sizeof(arr)/sizeof(int);
    unordered_map<int, int> Map;
    int sum=0,max_len=0,end_index=0;
    for(int i=0; i <n; i++)
    {
        if (arr[i]==0) arr[i]=-1;
    }
    // cout<<arr[0];
    for(int i=0; i <n; i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            max_len=i+1;
            end_index=i;
        }

        if (Map.find(sum)!=Map.end())
        {
            if (max_len <i-Map[sum])
            {
                max_len=i-Map[sum];
                end_index=i;
            }
        }
        else
            Map[sum]=i;
    }
    cout<<end_index-max_len +1<<" to "<<end_index;
}

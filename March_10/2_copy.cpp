#include <iostream>
#include <unordered_map>
using namespace std;
void print_array(int arr[] , int i , int j)

{   
	for ( int a=i; a<=j; a++)
		cout<<arr[a]<<" ";
	cout<<endl;	 

}

int main()
{
     int arr[10]={3,4,-7,3,1,3,1,-4,2,2};
     unordered_map<int , int> map;
     // int prev_index=-1;
     int sum=0;
     for (int i=0;i<10;i++)
     {
        sum+=arr[i];
        if(sum==0)
        {
            cout<<"found at "<<0<<" "<<i<<endl;
        }
        else if (map.find(sum)!=map.end())
        {
        	cout<<"found at "<<i-(i-map[sum])+1<<" "<<i<<endl;
        }
        else
        {
        	map[sum]=i;
        }

     }


}
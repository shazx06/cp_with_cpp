#include <iostream>
using namespace std;

int max(int x , int y)
{
	if (x>y)
		return x;
	else return y;

}
int min(int x,int y)
{
	if (x<y)
		return x;
	else return y;
}


int max_product(int arr[], int n)
{
	int max_product=0;
	int min_product=0;
	int maximum=0;
	int temp;
	for (int i=0; i<n;i++)
	{   temp=max_product;
		max_product=max(arr[i], max(arr[i]*max_product,arr[i]*min_product));
		min_product=min(arr[i],min(arr[i]*min_product,arr[i]*temp));
		maximum=max(maximum,max_product);
		// cout<<max_product<<" "<<min_product<<"  "<< maximum<< endl;


	}
	return maximum;
}



int main()
{
    int arr0[]={ -6, 4, -5, 8, -10, 0, 8 };
	int arr1[]={ 40, 0, -20, -10 };
	int n0=sizeof(arr0)/sizeof(int);
	int n1=sizeof(arr1)/sizeof(int);
	cout<<"maximum product "<<max_product(arr0,n0)<<endl<<"maximum product "<<max_product(arr1,n1)<<endl;


}
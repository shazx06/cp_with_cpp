#include<iostream>
using namespace std;


int min_coin(int x , int y , int total)
{   if (total<=0) return 0;
    int count=0;
    if (total >= x)
    {


    count+=total/x;
    total=total%x;
    }
    if (total >=y)
    {


    count+=total/y;
    total=total%y;
    }


    count+=total;
    return count;

}


int main()
{

    cout << min_coin(10,6,0)<<endl;
}

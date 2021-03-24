## March 24th

1. **Given 3 coins of value 1,x,y and a target amount return the min coins required to make up the sum.
<br>
Target =20<br>
Ex :- x,y = 6,10<br>
Min coins =2**
```cpp
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
```

2. [add binary](https://leetcode.com/problems/add-binary/)
```cpp
class Solution {
public:
string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1,carry=0;
        string ans;
        while(i>=0 && j>=0)
        {
            int x=a[i]-'0'+b[j]-'0'+carry;
            if(x==0)
                ans='0'+ans;
            else if(x==1)
            {
                ans='1'+ans;
                carry=0;
            }
            else if(x==2)
            {
                ans='0'+ans;
                carry=1;
            }
            else 
            {
                ans='1'+ans;
                carry=1;
            }
            i--;
            j--;
        }
        while(i>=0)
        {
            int x=a[i]-'0'+carry;
            if(x==0)
                ans='0'+ans;
            else if(x==1)
            {
                ans='1'+ans;
                carry=0;
            }
            else if(x==2)
            {
                ans='0'+ans;
                carry=1;
            }
            i--;
        }
        while(j>=0)
        {
            int x=b[j]-'0'+carry;
            if(x==0)
                ans='0'+ans;
            else if(x==1)
            {
                ans='1'+ans;
                carry=0;
            }
            else if(x==2)
            {
                ans='0'+ans;
                carry=1;
            }
            j--;
        }
        if(carry)
            ans='1'+ans;
        return ans;
    }
};
```

3. [sort color](https://leetcode.com/problems/sort-colors/description/)
```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        if (nums.size()<=1) return;
        int c0=0,c1=0,c2=0;
        for (int  i : nums)
        {
            if (i==0) c0+=1;
            else if (i==1) c1+=1;
            else c2+=1;
        }
        int j=0; 
        for (int i=0 ; i <c0;i++)
        {
            nums[j++]=0;
        }
        for (int i=j ;i <c0+c1;i++)
        {
            nums[j++]=1;
        }
        for (int i=j ; i <c0+c1+c2;i++)
        {
            nums[j++]=2;
        }
        
    }
};
```
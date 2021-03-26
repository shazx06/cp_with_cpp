## March 27th

1. [Multiply string](https://leetcode.com/problems/multiply-strings/)
```python
class Solution:
    def multiply(self, num1: str, num2: str) -> str:
        if num1=="0" or num2=='0':
            return '0'
        n1,n2=0,0
        zero=ord('0')
        for i in num1:
            n1=n1*10+(ord(i)-zero)
        for i in num2:
            n2=n2*10+(ord(i)-zero)
            
        res=n1*n2
        s=""
        while res >0:
            s=chr(res%10+zero)+s
            res=res//10
        return s;
            
            
 ```
 2. [3 Sum](https://leetcode.com/problems/3sum/)
 ```cpp
 class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector <vector <int>> res;
        int n=nums.size();

        
        if (n<3) return res;
        
        sort(nums.begin(),nums.end());
        
        for (int i=0; i<n-2;i++)
        {
        if (i==0 || (i>0 && nums[i]!=nums[i-1]))
        {
            int sec=i+1;
            int last=n-1;
            while (sec <last)
            { 
                int   sum=nums[i]+nums[sec]+nums[last];
                if (sum==0) 
                {
                 res.push_back({nums[i],nums[sec],nums[last]}); 
                 while (sec < last && nums[sec]==nums[sec+1])sec++;
                 while (sec <last && nums[last]==nums[last-1])last--;
                 sec++;last--;
                 
                }
                if (sum > 0) last--;
                if (sum<0) sec++;
            }
        }
        }
        return res;
    }
};
```
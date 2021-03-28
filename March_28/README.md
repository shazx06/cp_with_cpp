## March 28

1. [house robber](https://leetcode.com/problems/house-robber/)
```cpp
class Solution {
public:
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        if (n==1) return nums[0];
        if (n<=2) return *max_element(nums.begin(),nums.end());
       int l=nums[0],mid=nums[1],r=l+nums[2];
        for ( int i=3;i<n;i++)
        {  int swap=r;
            r= max(l,mid)+nums[i];
            l=mid;
         mid=swap;
            
        }
        return max(mid,r);
        
    }
};
```
2. [valid parenthesis](https://leetcode.com/problems/longest-valid-parentheses/)
```python
class Solution:
    def longestValidParentheses(self, s: str) -> int:
        st=[-1]
        ln=0
        for i in range(len(s)):
            if s[i]=="(":
                st.append(i)
            else :
                st.pop()
                if not st:
                    st.append(i)
                ln=max(ln,i-st[-1])
        return ln
                
                
```
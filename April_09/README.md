## April 9th

1. [Regular Expression Mathcing](https://leetcode.com/problems/regular-expression-matching/)
```cpp
class Solution {
public:
  bool isMatch(string s, string p) {
        if(p.empty())
            return s.empty();
      
        bool Result[s.length()+1][p.length()+1];
      
        Result[0][0] = true;

        for(int j = 1; j < p.length()+1; j++)
        {
            if(p[j-1] == '*')
                Result[0][j] = Result[0][j-2];
            else
                Result[0][j] = false;
        }
        
        for(int i = 1; i < s.length()+1; i++)
            Result[i][0] = false;
        
        for(int i = 1; i < s.length()+1; i++)
        {
            for(int j = 1; j < p.length()+1; j++)
            {
                if(s[i-1] == p[j-1] || p[j-1] == '.')
                    Result[i][j] = Result[i-1][j-1];
                else if(p[j-1] == '*')
                {
                    Result[i][j] = Result[i][j-2];
                    if(s[i-1] == p[j-2] || p[j-2] == '.')
                        Result[i][j] = Result[i][j] | Result[i-1][j];
                }
                else
                    Result[i][j] = false;
            }
        }
        return Result[s.length()][p.length()];
    }
};
```
2. [Wildcard Matching](https://leetcode.com/problems/wildcard-matching/)
```cpp
class Solution {
public:
    bool isMatch(string s, string p) {
        if (p.empty()) return s.empty();
        bool dp[p.size()+1][s.size()+1];
        dp[0][0]=true;
        for (int j=1;j <=s.size();j++)
        {
            dp[0][j]=false;
        }
        for (int i=1;i<=p.size();i++)
        {
            if (p[i-1]=='*')
            {
                dp[i][0]=dp[i-1][0];
            }
            else
            {
                dp[i][0]=false;
            }
        }
        for (int i=1; i <=p.size();i++)
            for(int j=1; j <=s.size();j++)
            {
                if (p[i-1]==s[j-1] || p[i-1]=='?')
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else if (p[i-1]=='*')
                {
                    dp[i][j]=dp[i-1][j] || dp[i][j-1];
                }
                else {
                    dp[i][j]=false;
                }
            }    

        
        return dp[p.size()][s.size()];
        
    }
};
```
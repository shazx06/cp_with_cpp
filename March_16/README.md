# 16 March

---

### [1. A simple text editor](https://www.hackerrank.com/challenges/simple-text-editor/problem)

```cpp
#include <bits/stdc++.h>
int N;
    cin>>N;
    stack<string>stk;
    string st;
    while(N--)
    {
        int n; cin>>n;
        if(n==1){
            string str;
            cin>>str;
            stk.push(st); 
            st+=str;
        }
        else if(n==2){
            int k;cin>>k;
             stk.push(st);
            st.erase(st.size()-k);
        }
        else if(n==3){
            int k;cin>>k;
            cout<<st[k-1]<<endl; 
        }
        else{
            st = stk.top();  
            stk.pop();
        }
    }

```
<br>

### [2. Min cost climbing stairs](https://leetcode.com/problems/min-cost-climbing-stairs/description/)
```cpp
 int minCostClimbingStairs(vector<int>& cost)
  {
        
        int n=cost.size();
        int l=cost[0],r=cost[1],temp=0;
        for (int i=2;i<n;i++)
        {
            temp=r;
            r=min(l,r)+cost[i];
            l=temp;
        }
        return min(l,r);
    }
```
<br>

### [3. Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/)

```cpp
int minPathSum(vector<vector<int>> &grid) {
	int n=grid.size();
	int m=grid[0].size();
	for(int i=0;i<n;i++)
	{
		for( int j=0;j<m;j++)
		{
			if (i==0 && j==0)
			{
               //do nothing
			}
			else if (i==0)
			{
                grid[i][j]+=grid[i][j-1];
			}
			else if (j==0)
			{
				grid[i][j]+=grid[i-1][j];
			}
			else
			{
				grid[i][j]+=min(grid[i-1][j],grid[i][j-1]);
			}


		}
	}
			return grid[n-1][m-1];


        

    }

```
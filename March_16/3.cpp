#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;


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


    int main()
    {
    	vector<vector<int>> v={{1,3,1},{1,5,1},{4,2,1}};
    	cout<<minPathSum(v);
    }
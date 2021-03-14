#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std ;
vector<int> findDuplicates(vector<int>nums) {
        
    unordered_map<int ,int> umap;
    vector <int> res;
    for (auto i : nums)
    {
        if (umap.find(i)!=umap.end())
        {
            res.push_back(i);
        }
        else
        {
            umap[i]=1;
            
        }
    }
    return res;
    }
int main()
{
  vector <int> v={4,3,2,7,8,2,3,1};

  for (auto i: findDuplicates({4,3,2,7,8,2,3,1}) )
  {
        cout<<i<<" ";
  }
}
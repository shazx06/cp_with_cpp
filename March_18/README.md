## March 18th

1. [remove duplicates from sorted array ii](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)
> hint instead of matching with previous i.e. j-1 match the current value with j-2
```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if (n<=2)return n;
        
        int j=1;
        for(int i=2;i<nums.size();i++)
        {
            if(nums[j-1]!=nums[i])
            {
                nums[++j]=nums[i];
                
            }
        }
        return j+1;
        
    }
};
```
2. [maximum-subarray](https://leetcode.com/problems/maximum-subarray)
```cpp
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int max_sum=nums[0],cur_sum=nums[0];
        for (int i =1;i<nums.size();i++)
        {
            cur_sum=max(nums[i] ,nums[i]+cur_sum);
            max_sum=max(cur_sum,max_sum);
        }
    return max_sum;

    }
    
};
```
3. [degree of an array](https://leetcode.com/problems/degree-of-an-array)

```cpp
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int maxFreq = 0;
        unordered_map<int,int> degree;
        unordered_map<int,int> firstOcc;
        unordered_map<int,int> lastOcc;
                int minLen = INT_MAX;
        for (int i = 0; i < nums.size(); ++i){
            auto num = nums[i];
            degree[num]++;
            
            if (firstOcc.find(num) == firstOcc.end())
                firstOcc[num] = i;
            
            lastOcc[num] = i;
            
            if (degree[num] > maxFreq){
                maxFreq = degree[num];
                minLen = lastOcc[num] - firstOcc[num] + 1;
            }
            else if (degree[num] == maxFreq){
                minLen = min(minLen, lastOcc[num] - firstOcc[num] + 1);
            }
        }
        
        return minLen;
    }
};

```

## March 20th

1. [longest  substring without repeating character](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map < char , int > map;
        int start=0,len=0;
        
        
       for (int i=0; i< s.size();i++)
       {
           if (map.find(s[i]) != map.end()  && start <=  map[s[i]])
           {
               start=map[s[i]]+1;
               
           }
           else
           {
               len=max(len,i-start+1);
           }
           map[s[i]]=i;
       }
        return len;

        
        
    }
};
```

2. [maximum erase value](https://leetcode.com/problems/maximum-erasure-value)
```cpp
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map <int , int > map;
        int max_sum=0,start=0;
        for ( int i=0; i< nums.size(); i++)
        {
            if (map.find(nums[i]) != map.end() && start <=  map[nums[i]])
            {
                start=map[nums[i]]+1;
                
            }
            else
            {   
                max_sum=max(max_sum,accumulate(nums.begin()+start, nums.begin()+i+1,0));
                
            }
            map[nums[i]]=i;
        }
        return max_sum;
    }
};
```


3. [poisonous plant](https://www.hackerrank.com/challenges/poisonous-plants/problem)
```cpp
def poisonousPlants(p):
  
    stack = []
    maxDays = -math.inf

    for plant in p:
        days = 1

        while stack and stack[-1][0] >= plant:
            _, d = stack.pop()
            days = max(days, d + 1)
        
        if not stack:
            days = 0
        
        maxDays = max(maxDays, days)
        stack.append((plant, days))
    
    return maxDays
 ```



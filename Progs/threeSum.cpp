#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        vector<vector<int>> threeSum(vector<int>& nums)
        {
            vector<vector<int>> ans;
            if(nums.size() < 3) return ans;
            if(nums.size() == 3 && nums[0] + nums[1] + nums[2] == 0) return {nums};
            sort(nums.begin(),nums.end());
            int p1, p2; 
            for(int i = 0; i < nums.size()-2; i++)
            {
                p1 = i+1; p2 = nums.size()-1;
                if(i > 0 && nums[i] == nums[i-1])    continue;
                while(p1 < p2)
                {
                    if(nums[p1] + nums[p2] + nums[i] == 0)
                    {
                        ans.push_back({nums[i],nums[p1],nums[p2]});
                        while(nums[p1] != nums[p1+1]) p1++;
                        while(nums[p2] != nums[p2-1]) p2--;
                    }
                    while(nums[p1] + nums[p2] + nums[i] < 0 && p1 < p2) p1++;
                    while(nums[p1] + nums[p2] + nums[i] > 0 && p1 < p2) p2--;
                }
            }
            return ans;
        }
    
};

int main()
{
    
    return 0;
}
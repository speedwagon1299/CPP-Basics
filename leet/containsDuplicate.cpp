#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        bool containsDuplicate(vector<int>& nums) 
        {
            bool flag = false;
            unordered_map<int,int> mp;
            for(int i = 0; i < nums.size(); i++)
            {
                mp[nums[i]]++;
                if(mp[nums[i]] == 2)
                {
                    flag = true;
                    break;
                }
            }
            return flag;
        }
};

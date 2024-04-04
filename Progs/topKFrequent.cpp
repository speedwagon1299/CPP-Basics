#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        static int comp(pair<int,int> a, pair<int,int> b)
        {
            return a.second > b.second;
        }
        vector<int> topKFrequent(vector<int>& nums, int k)
        {
            unordered_map<int,int> v;
            for(int i = 0; i < nums.size(); i++)
            {
                v[nums[i]]++;
            }
            vector<pair<int,int>> copy (v.begin(), v.end());
            sort(copy.begin(),copy.end(),comp);
            vector<int> ans;
            for(int i = 0; i < k; i++)
            {
                ans.push_back(copy[i].first);
            }
            return ans;
        }
};

int main()
{
    return 0;
}
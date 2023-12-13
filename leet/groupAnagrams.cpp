#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs)
        {
            unordered_map<string,vector<string>> mp;
            for(string str : strs)
            {
                string temp = str;
                sort(temp.begin(), temp.end());
                mp[temp].push_back(str);
            }
            vector<vector<string>> ans;
            for(auto i : mp)
            {
                ans.push_back(i.second);
            }
            return ans;
        }
};

int main()
{
    
    return 0;
}
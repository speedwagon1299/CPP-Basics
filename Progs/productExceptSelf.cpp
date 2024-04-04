#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        vector<int> productExceptSelf(vector<int>& nums) 
        {
            vector<int> ans;
            int pre = 1, post = 1;
            for(int i = 0; i < nums.size(); i++)
            {
                ans.push_back(pre);
                pre*= nums[i];
            }
            for(int i = ans.size()-1; i >= 0; i--)
            {
                ans[i] *= post; 
                post*= nums[i];
            }
            return ans;
        }
};

int main()
{
    
    return 0;
}

        //vector<int> productExceptSelf(vector<int>& nums) 
        // {
        //     vector<int> pre,post,ans;
        //     int propre = 1, propost = 1;
        //     for(int i = 0; i < nums.size(); i++)
        //     {
        //         pre.push_back(propre);
        //         post.push_back(propost);
        //         propre*= nums[i];
        //         propost*= nums[nums.size()-1-i];
        //     }
        //     for(int i = 0; i < nums.size(); i++)
        //     {
        //         ans.push_back(pre[i]*post[nums.size()-1-i]);
        //     }
        //     return ans;
        // }
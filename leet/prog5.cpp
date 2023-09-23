#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;    
long long maxSum(vector<int>& nums, int m, int k)
{
    long sub_num = nums.size()-k+1;
    long long max = 0, sum = 0;
    vector<unordered_set<long long>> poss(sub_num);
    vector<vector<long long>> v(sub_num);
    for(int i = 0; i < sub_num; i++)
    {
        for(int j = i; j < k+i; j++)
        {
            poss[i].emplace(nums[j]);
            v[i].emplace_back(nums[j]);
        }
        if(poss[i].size() >= m)
        {
            for(auto a : v[i])
            sum+= a;
            if(max < sum)
            max = sum;
        }
        sum = 0;
    }
    return (long long)max;
}

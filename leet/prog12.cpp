#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std; 

long long maximumSum(vector<int>& nums) 
{
    vector<pair<int,int>> v;
    for(int i = 0; i < nums.size() - 1; i++)
    {
        for(int j = i+1; j < nums.size(); j++)
        {
            double sq = sqrt((i+1)*(j+1));
            if(sq == sq/1)
            {
                v.push_back({nums[i],nums[j]});
            }
        }
    }
    long long sum = INT_MIN;
    for(auto i: v)
    {
        cout << i.first << " " << i.second << endl;
        if(i.first + i.second > sum)
        sum = i.first+i.second;
    }
    return sum;
} 

int main()
{
    return 0;
}
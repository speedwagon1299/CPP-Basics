#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;  
int numberOfPoints(vector<vector<int>>& nums) 
{
    set<int> s;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = nums[i][0]; j <= nums[i][1]; j++)
        {
            s.insert(j);
        }
    }
    return s.size();
}
int main()
{
    vector<vector<int>>v = {{3,6},{1,5},{4,7}};
    cout << numberOfPoints(v);
}
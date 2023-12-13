#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        int longestConsecutive(vector<int>& nums)
        {
            unordered_set<int> s (nums.begin(),nums.end());
            int longest = 1, length = 1;
            for(auto &n: s)     // ie reference to numbers in the set NOT ITERATOR
            {
                if(!s.count(n-1))       // if n-1 doesnt exist, start the new sequence
                {
                    length = 1;
                    while(s.count(n+length))    length++;
                    if(longest < length) longest = length;
                }
            }
            return longest;
        }
};

int main()
{
    
    return 0;
}
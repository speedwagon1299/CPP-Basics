#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        vector<int> twoSum(vector<int>& numbers, int target)
        {
            int p1 = 0, p2 = numbers.size() - 1;
            while(p1 < p2)
            {
                if(numbers[p1] + numbers[p2] == target) 
                {
                    p1++;   p2++;
                    break;
                }
                while(numbers[p1] + numbers[p2] > target) p2--;
                while(numbers[p1] + numbers[p2] < target) p1++;
            }
            return {p1,p2};
        }
};

int main()
{
    
    return 0;
}
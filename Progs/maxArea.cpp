#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        int maxArea(vector<int>& height)
        {
            int p1 = 0, p2 = height.size()-1, area = 0, temp = 0;
            while(p1 < p2)
            {
                temp = min(height[p1],height[p2])*(p2-p1);
                if(area < temp) area = temp;
                if(height[p1] < height[p2]) 
                {   
                    while(height[p1] < height[p2] && p1 < p2) 
                    p1++; 
                }
                else if(height[p1] > height[p2]) 
                {
                    while(height[p1] > height[p2] && p1 < p2) 
                    p2--;
                }
                else
                {
                    p1++;
                }    
            }
            return area;
        }
};

int main()
{
    
    return 0;
}
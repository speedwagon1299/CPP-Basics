#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        bool isPalindrome(string s)
        {
            int p1 = 0, p2 = s.length()-1;
            while(p1 < p2)
            {
                while(!isalnum(s[p1]) && p1 < p2)  p1++;
                while(!isalnum(s[p2]) && p1 < p2)  p2--;
                if(tolower(s[p1]) != tolower(s[p2]))  return false;
                p1++; p2--;
            }
            return true;
        }
};

int main()
{
    
    return 0;
}
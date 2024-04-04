#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        bool isAnagram(string s, string t)
        {
            if(s.length() != t.length()) return false;
            unordered_map<char,int> mp1,mp2;
            for(int i = 0; i < s.length(); i++)
            {
                mp1[s[i]]++;
                mp2[t[i]]++;
            }
            if(mp1 == mp2)  return true;
            return false;
        }
};

int main()
{
    
    return 0;
}
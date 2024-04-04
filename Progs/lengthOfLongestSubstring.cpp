class Solution 
{
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_set<char> chars;
        int n = s.length();
        int l = 0, r = 0, len = 0;
        while(r < n)
        {
            while(chars.find(s[r]) != chars.end())
            {
                chars.erase(s[l]);
                l++;
            }
            len = max(len,r-l+1);
            chars.insert(s[r]);
            r++;
        }
        return len;
    }
};
class Solution 
{
public:
    int minimumPushes(string word) 
    {
        int len = word.length();
        if(len <= 8)    return len;
        else if(len > 8 && len < 16)    return 8 + 2*(len%8);
        else if(len >= 16 && len < 24)   return 24 + 3*(len%8);
        else  return 36 + 4*(len%8)
    }
};
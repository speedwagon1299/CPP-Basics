class Solution 
{
public:
    // int charReplace(string s, int k) 
    // {
    //     int n = s.length();
    //     int l = 0, r = 0, len = 0, K;
    //     while(r < n)
    //     {
    //         K = 0;
    //         while((s[l] == s[r] || K < k) && r < n)
    //         {
    //             if(s[l] != s[r] && K < k)
    //             {
    //                 K++;
    //             }
    //             r++;
    //         }
    //         len = max(r-l,len);
    //         l++;
    //         r = l;
    //     }
    //     return len;
    // }
    // int characterReplacement(string s, int k) 
    // {
    //     if(s == "BAAAB")    return 5;
    //     if(s == "BAAABAB")  return 7;
    //     int l1 = charReplace(s,k);
    //     reverse(s.begin(),s.end());
    //     int l2 = charReplace(s,k);
    //     return max(l1,l2);
    // }
    int characterReplacement(string s, int k)
    {
        vector<int> count(26);
        int maxC = 0, res = 0, i = 0, j = 0, n = s.length();
        while(j < n)
        {
            maxC = max(maxC,++count[s[j] - 'A']);
            if(j-i+1 - maxC > k)
            {
                count[s[i]-'A']--;
                i++;
            }
            res = max(res,j-i+1);
            j++;
        }
        return res;
    }
};
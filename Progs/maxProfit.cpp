class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int l = 0, r = 1, n = p.size(), temp, prof = 0;
        while(r < n)
        {
            if(p[l] < p[r]) 
            {
                temp = p[r] - p[l];
                prof = max(prof,temp);
            }
            else    l = r;
            r++;
        }
        return prof;
    }
};
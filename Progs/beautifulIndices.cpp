class Solution 
{
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) 
    {
        int sn = s.length(), an = a.length(), bn = b.length();
        vector<int> res;
        int init = -1, temp;
        while(true)
        {
            temp = k;
            auto i = s.find(a,init+1);
            if(i == string::npos)  break;
            init = i;
            if(k > i)   temp = i;
            auto j = s.find(b,i-temp);
            if(j != string::npos && (i-j <= k || j-i <= k)) res.push_back(i);
        }
        return res;
    }
};
class Solution 
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n1 = s1.length()-1, n2 = s2.length()-1;
        if(n1 > n2)   return false;
        vector<int> count(26);
        for(int i = 0; i <= n1; i++)
        {
            count[s1[i]-'a']++;
            count[s2[i]-'a']--;
        }
        if(checkZero(count))    return true;
        int p = n1+1;
        while(p <= n2)
        {
            count[s2[p-n1-1]-'a']++;
            count[s2[p] - 'a']--;
            if(checkZero(count))
            return true;
            p++;
        }     
        return false;
    }
private:
    bool checkZero(vector<int> count)
    {
        for(auto i: count)
        {
            if(i != 0)  return false;
        }
        return true;
    }
};
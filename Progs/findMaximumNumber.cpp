class Solution 
{
private:
    vector<int> binconv(int num)
    {
        vector<int> res;
        while(num > 0)
        {
            res.push_back(num%2);
            num/=2;
        }
        return res;
    }

public:
    long long findMaximumNumber(long long k, int x) 
    {
        int sum = 0, num;
        for(num = 1;;num++)
        {
            
            vector<int> bin = binconv(num);
            int itr;
            for(itr = 1; itr <= bin.size(); itr++)
            {
                if(itr%x == 0 && bin[itr-1] == 1)   sum++;
            }
            if(sum > k) break;
        }
        return num-1;
    }
};
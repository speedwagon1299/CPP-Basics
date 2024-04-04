class Solution 
{
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) 
    {
        vector<double> diag;
        vector<int> area;
        for(auto i: dimensions)
        {
            diag.push_back(sqrt(i[1]*i[1] - i[0]*i[0]));
            area.push_back(i[1]*i[0]);
        }
        double maxim = 0;
        int ans;
        for(int i = 0; i < diag.size(); i++)
        {
            if(maxim < diag[i])
            {
                maxim = diag[i];
                ans = area[i];
            }
            else if(maxim == diag[i])
            {
                ans = max(ans,area[i]);
            }
        }
        return ans;
    }
};
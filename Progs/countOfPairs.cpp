class Solution 
{
public:
    vector<int> countOfPairs(int n, int x, int y) 
    {
        vector<vector<int>> minStreets(n + 1,vector<int>(n + 1, INT_MAX));
        minStreets[x][y] = 1;
        minStreets[y][x] = 1;
        for(int i = 0; i < n; i++)
        {
            minStreets[i][0] = 0;
            minStreets[0][i] = 0;
        }
        for(int i = 1; i < n; i++) 
        {
            minStreets[i][i + 1] = 1;
            minStreets[i + 1][i] = 1;
        }
        for(int k = 2; k <= n; k++) 
        {
            for(int i = 1; i <= n - k + 1; i++) 
            {
                int j = i + k;
                minStreets[i][j] = min(minStreets[i][j], minStreets[i][j - 1] + 1);
                minStreets[j][i] = minStreets[i][j];
            }
        }
        vector<int> res(n, 0);
        for(int i = 1; i <= n; i++) 
        {
            for(int j = 1; j <= n; ++j) 
            {
                res[minStreets[i][j] - 1]++;
            }
        }
        return res;
    }
};
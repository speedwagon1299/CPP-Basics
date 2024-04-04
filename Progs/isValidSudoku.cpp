#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
using namespace std;
class Solution
{
    public:
        bool isValidSudoku(vector<vector<char>>& board)
        {
            if(!checkRowColGrid(board)) return false;
            return true;
        }
    private:
        bool checkRowColGrid(vector<vector<char>>& arr)
        {
            unordered_map<char,int> mp1, mp2, mpa, mpb, mpc;
            for(int i = 0; i < arr.size(); i++)
            {
                for(int j = 0; j < arr[i].size(); j++)
                {
                    if(arr[j][i] != '.')
                    {
                        mp2[arr[j][i]]++;
                        if(mp2[arr[j][i]] > 1) return false;
                    }
                    if(arr[i][j] != '.')
                    {
                        mp1[arr[i][j]]++;
                        if(mp1[arr[i][j]] > 1) return false;
                        if(j >= 0 && j < 3) mpa[arr[i][j]]++;
                        if(mpa[arr[i][j]] > 1) return false;
                        if(j >= 3 && j < 6) mpb[arr[i][j]]++;
                        if(mpb[arr[i][j]] > 1) return false;
                        if(j >= 6 && j < 9) mpc[arr[i][j]]++;
                        if(mpc[arr[i][j]] > 1) return false;
                    }
                }
                mp1.clear();
                mp2.clear();
                if((i+1)%3 == 0)
                {
                    mpa.clear();
                    mpb.clear();
                    mpc.clear();
                }
            }
            return true;
        }
};

int main()
{

    return 0;
}
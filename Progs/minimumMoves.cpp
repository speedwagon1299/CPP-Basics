#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;  
int minimumMoves(vector<vector<int>>& grid) 
{
    int moves = 0;
    int count = 1;
    vector<pair<pair<int,int>,int>>p;
    vector<pair<int,int>>p0;
    for(int i = 0; i < grid.size(); i++)
    {
        for(int j = 0; j < grid[i].size(); j++)
        {
            if(grid[i][j] == 3)
            p.push_back({{i,j},3});
            if(grid[i][j] == 2)
            p.push_back({{i,j},2});
            if(grid[i][j] == 0)
            p0.push_back({i,j});
        }
    }
    vector<pair<int,pair<int,int>>> diff;
    for(auto i : p)
    {
        for(auto j : p0)
        {
            diff.push_back({abs(j.first-i.first.first) + abs(j.second-i.first.second),{i.second,count}});
        }
        count++;
    }
    
    // while(count <= 4)
    // {
    //     for(auto i: p)
    //     {
    //         for(int x = 0; x < grid.size(); x++)
    //         {
    //             for(int y = 0; y < grid[x].size(); y++)
    //             {
    //                 if(grid[x][y] == 0 && count == abs(x-i.first.first) + abs(y-i.first.second) && i.second >= 2)
    //                 {
    //                     moves+= count;
    //                     i.second--;
    //                 }
    //             }
    //         }
    //     }
    //     count++;
    // }

}
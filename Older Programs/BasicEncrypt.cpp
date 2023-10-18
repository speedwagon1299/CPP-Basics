#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int compute()
{
    int n; cin >> n;
    vector<vector<int>> v(3, vector<int>(n));
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
        cout << endl;
    }
    vector<int> sum(n);
    for(int j = 0; j < n; j++)
    {
        for(int i = 0; i < 3; i++)
        {
            sum[j] += v[i][j];
        }
    }
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        s+= v[i%3][(sum[i]-1)%n];
    }
    return s;
}
int main()
{
    cout << compute();
    return 0;
}
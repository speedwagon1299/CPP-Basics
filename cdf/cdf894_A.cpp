#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sol[t] = {0};
    for(int k = 0; k < t; k++)
    {
        int n, m;
        cin >> n; cin >> m;
        char arr[n][m];
        int flag = 0; int point = -1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
            cout << endl;
        }
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(flag == 0 && arr[j][i] == 'v')
                {
                    flag++;
                    point = i;
                    continue;
                }
                else if(flag == 1 && arr[j][i] == 'i' && point < i)
                {
                    flag++;
                    point = i;
                    continue;
                }
                else if(flag == 2 && arr[j][i] == 'k' && point < i)
                {
                    flag++;
                    point = i;
                    continue;
                }
                else if(flag == 3 && arr[j][i] == 'a' && point < i)
                {
                    // if(k == 4)
                    // {
                    //     cout << "\n" << point << " " << j << endl;
                    // }
                    flag++;
                    continue;
                }
            }
        }
        sol[k] = flag;
    }
    for(int i = 0; i < t; i++)
    {
        if(sol[i] == 4)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}
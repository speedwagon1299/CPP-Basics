#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sol[t] = {};
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int da[n];
        int sa[n];
        int sum[n];
        for(int j = 0; j < n; j++)
        {
            cin >> da[j] >> sa[j];
        }
        int min = INT_MAX;
        for(int j = 0; j < n; j++)
        {
            sum[j] = da[j] + sa[j]/2 - 1;
            if(sa[j]%2 != 0) sum[j]++;
            if(sum[j] < min)
            min = sum[j];
        }
        sol[i] = min;
    }
    for(int i : sol)
    cout << i << endl;
    return 0;
}
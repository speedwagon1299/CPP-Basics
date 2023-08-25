#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sol[t] = {0};
    int rem = 0, sum = 0;
    for(int k = 0; k < t; k++)
    {
        sum+= rem;
        int w, f;
        cin >> w;
        cin >> f;
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for(auto j : arr)
        sum+= j;
        
    }
    for(int i = 0 ; i < t; i++)
    {
        cout << sol[i] << endl;
    }
}
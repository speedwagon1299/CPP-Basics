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
        int a,b,c;
        cin >> a >> b >> c;
        int max = (a>b)?a:b;
        int min = (a<b)?a:b;
        int moves = 0;
        while(max - c > min + c)
        {
            moves++;
            max-=c;
            min+=c;
        }
        if(max == min)
        sol[i] = moves;
        else
        sol[i] = ++moves;
    }
    for(int i : sol)
    cout << i << endl;
    return 0;
}
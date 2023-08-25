#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int sol[t] = {0};
    vector<vector<int>>V(t);
    for(int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        vector<int> v(n,1);
        for(int i = 0; i < n; i++)
        cin >> v[i];
        int size = v.size();
        for(int i = 0; i < size; i++)
        {
            if(v[i] > v[i+1])
            {
                v.insert(v.begin()+i+1,v[i+1]);
                if(v.back() < 0)
                v.back() = 1;
                i++;
            }
        }
        V[k] = v;
    }
    for(int i = 0; i < t; i++)
    {
        cout << V[i].size() << endl;
        for(int j = 0; j < V[i].size(); j++)
        {
            if(V[i][j] == 0)
            V[i][j] = 1;
            cout << V[i][j] << " ";
        }
        cout << endl;
    }
}
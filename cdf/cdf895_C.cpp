    #include <bits/stdc++.h>
    #include <iostream>
    using namespace std;
    int isPrime(int n)
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n%i == 0)
            return 0;
        }
        return 1;
    }
    int main()
    {
        int t;
        cin >> t;
        vector<pair<int,int>> v;
        for(int i = 0; i < t; i++)
        {
            int l,r;
            cin >> l >> r;
            if(l == r && l%2 != 0)
            {
                if(isPrime(l))
                v.push_back({-1,-1});
                else
                {
                    for(int j = 3; j <= sqrt(l); j++)
                    {
                        if(l%j == 0)
                        {
                            v.push_back({j,l-j});
                            break;
                        }
                    }
                }
            }
            else
            {
                int a = (l+r)/2;
                if(r == 4 || r == 6)
                a = r;
                if((a/2)%2 != 0 && (a/2)-1 > 1)
                v.push_back({(a/2)-1,(a/2)+1});
                else if((a/2)%2 == 0 && (a/2) > 1)
                v.push_back({(a/2),(a/2)});
                else
                v.push_back({-1,-1});
            }
        }
        for(int i = 0; i < t; i++)
        {
            if(v[i].first == -1)
            cout << -1 << endl;
            else
            cout << v[i].first << " " << v[i].second << endl;
        }
        return 0;
    }
    
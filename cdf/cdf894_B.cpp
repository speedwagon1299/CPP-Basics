// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     int sol[t] = {0};
//     vector<vector<int>>V(t);
//     for(int k = 0; k < t; k++)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n,1);
//         for(int i = 0; i < n; i++)
//         cin >> v[i];
//         int size = v.size();
//         for(int i = 0; i < size; i++)
//         {
//             if(v[i] > v[i+1])
//             {
//                 v.insert(v.begin()+i+1,v[i+1]);
//                 if(v.back() < 0)
//                 v.back() = 1;
//                 i++;
//             }
//         }
//         V[k] = v;
//     }
//     for(int i = 0; i < t; i++)
//     {
//         cout << V[i].size() << endl;
//         for(int j = 0; j < V[i].size(); j++)
//         {
//             if(V[i][j] == 0)
//             V[i][j] = 1;
//             cout << V[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        string newstr = "";
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                newstr += to_string(v[i]) + " ";
                count += 1;
            } else {
                if (v[i] >= v[i - 1]) {
                    newstr += to_string(v[i]) + " ";
                    count += 1;
                } else {
                    newstr += to_string(v[i]) + " " + to_string(v[i]) + " ";
                    count += 2;
                }
            }
        }

        cout << count << endl;
        cout << newstr << endl;
    }

    return 0;
}
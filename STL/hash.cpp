#include<bits/stdc++.h>
using namespace std;
int main()
{
       
    // //Hash for int
    // for(int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Enter q" << endl;
    // //Hash
    // int hash[13] = {0}; //assuming max number asked is 12 (0 to 12)
    // for(int i = 0; i < n; i++)
    // {
    //     hash[arr[i]]++;
    // }
    // int q, num; //number of numbers to be checked and number to be searched
    // cin >> q;
    // while(q--)
    // {
    //     cin >> num;
    //     cout << hash[num] << endl;
    // }

        
    // //Hash for char
    // string str;
    // cin >> str;
    // int h[26] = {0};
    // for(int i = 0; i < str.size(); i++)
    // {
    //     h[str[i]-'a']++;
    // }
    // cout << "Enter q" << endl;
    // int q;
    // char ch; 
    // cin >> q;
    // while(q--)
    // {
    //     cin >> ch;
    //     cout << h[ch-'a'] << endl;
    // }

    //int arr in function max size 1e6, global 1e7


    //using map
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter q" << endl;
    //Hash
    int q, num;
    cin >> q;
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    while(q--)
    {
        cin >> num;
        cout << mp[num] << endl;
    }
    return 0;
}
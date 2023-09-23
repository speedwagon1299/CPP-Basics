#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;    

    bool canBeEqual(string s1, string s2) 
    {
        map<char,int>mp1e;
        map<char,int>mp1o;
        map<char,int>mp2e;
        map<char,int>mp2o;
        for(int i = 0; i < s1.length(); i++)
        {
            if(i%2 == 0)
            {
                mp1e[s1[i]]++;
                mp2e[s2[i]]++;
            }
            else{
                mp1o[s1[i]]++;
                mp2o[s2[i]]++;
            }
        }
        if(mp1e == mp2e && mp1o == mp2o)
        return true;
        return false;
    }
int main()
{
    cout << canBeEqual("yviqgzqwetjqwnmmbupitdsjdvophjhkiivtbsgehlxzestjjrqwahxcaafafgdxjiocwgnqbmoxbcbpiwz","yjowhiiitgdesjzjwvqqnuonirjggtbpjmpwmzapjsbcqahxfidqoxotbavmfzbcblxvesxwgcahhqwkedi");
    return 0;
}
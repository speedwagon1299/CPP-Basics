#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;    

    bool canBeEqual(string s1, string s2) 
    {
        if(s1 == s2)
        return 1;
        swap(s1[0],s1[2]);
        if(s1 == s2)
        return 1;
        swap(s1[1],s1[3]);
        if(s1 == s2)
        return 1;
        swap(s1[0],s1[2]);
        if(s1 == s2)
        return 1;
        return 0;
    }
    void swap(char& ch1, char& ch2)
    {
        char temp = ch1;
        ch1 = ch2;
        ch2 = temp;
    }
    int main()
    {
        if(canBeEqual("abcd","dacb"))
        cout << "true";
        else
        cout << "false";
    }
#include <iostream>
#include <cmath>
using namespace std;
int backtrack(string s, string num, int i);
int isPrime(int num);
string ans;
int main()
{
    int t, num;
    string n;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        int flag = 0;
        cin >> num;
        n = to_string(num);
        for(int j = 1; j <= 9; j++)
        {
            string st = to_string(j);
            if(backtrack(st,n,n.find(st)))
            {
                cout << ans;
                flag = 1;
                break;
            }
        }
        ans = "";
        cout << endl;
    }
    
}
int isPrime(int num)
{
    int flag = 1;
    for(int i = 2; i <= sqrt(num); i++)
    {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }
    }
    return flag;
}
int backtrack(string s, string num, int i)
{
    if(isPrime(stoi(s)) == 1 && stoi(s) > 10)
    {
        ans = s;
        return 1;
    }
    for(int j = i+1; j < num.length(); j++)
    {
        s += num.at(j);
        if(backtrack(s,num,j+1))
        {
            if(isPrime(stoi(s))) 
            {
                ans = s;
                return 1;
            }
        }
        else
        s = s.substr(0,s.length()-1);
    }
    return 0;
}
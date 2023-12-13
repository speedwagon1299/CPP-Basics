#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;  
int minimumOperations(string num) 
{
    vector<int> i0;
    vector<int> i5;
    vector<int> i7;
    vector<int> i2;
    for(int i = 0; i < num.length(); i++)
    {
        if(num.at(i) == '0')
        i0.push_back(i);
        if(num.at(i) == '5')
        i5.push_back(i);
        if(num.at(i) == '7')
        i7.push_back(i);
        if(num.at(i) == '2')
        i2.push_back(i);
    }
    int cost25 = INT_MAX, cost75 = INT_MAX, cost50 = INT_MAX, cost00 = INT_MAX, all0 = INT_MAX;
    int c = 0;
    for(int i = 0; i < num.length(); i++)
    {
        if(num.at(i) != '0')
        c++;
    }
    all0 = c;
    while(!i2.empty() && !i5.empty())
    {
        if(i5.back() - i2.back() < 0)
        i2.pop_back();
        else
        {
            cost25 = i5.back() - i2.back();
            break;
        }
    }
    if(cost25 != INT_MAX) cost25 += num.length()-2-i5.back();
    while(!i7.empty() && !i5.empty())
    {
        if(i5.back() - i7.back() < 0)
        i7.pop_back();
        else
        {
            cost75 = i5.back() - i7.back();
            break;
        }
    }
    if(cost75 != INT_MAX) cost75 += num.length()-2-i5.back();
    while(!i5.empty() && !i0.empty())
    {
        if(i0.back() - i5.back() < 0)
        i5.pop_back();
        else
        {
            cost50 = i0.back() - i5.back();
            break;
        }
    }
    if(cost50 != INT_MAX) cost50 += num.length()-2-i0.back();
    if(i0.size() >= 2)
    cost00 = num.length() - i0[i0.size()-2] - 2;
    int len = num.length();
    int cost[] = {len,cost00,cost25,cost50,cost75,all0};
    for(auto i: cost)
    cout << i << endl;
    return *min_element(cost,cost+6);
}
int main()
{
    cout << minimumOperations("1273548");
    return 0;
}
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    
    if(p1.first > p2.first)
    return true;
    return false;
}
void explainSort()
{
    vector<int> v = {1,4,2,7,5};
    v.emplace_back(0);
    sort(v.begin(), v.end());
    sort(v.begin()+1,v.begin()+4,greater<int>());   //call greater<int> as fucntion 
    for(auto i : v)
    cout << i << " ";

    pair<int,int> arr[] = {{1,2},{2,1},{4,1}};
    cout << endl;
    //To sort in a specified way
    //Example: Sort according to second element, if its same, sort in descending order of first element
    sort(arr,arr+3,comp);   //swapper function works in accordance to bool comp function orders
    for(auto i : arr)
    cout << i.first << " " << i.second << endl;
}
void explainExtra()
{
    string s = "1432";
    sort(s.begin(),s.end());
    do
    {
        cout << s << endl;
    } while(next_permutation(s.begin(),s.end()));
    
}
int main()
{
    explainSort();
    explainExtra();
    return 0;
}
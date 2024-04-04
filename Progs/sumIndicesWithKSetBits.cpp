#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;  
int toBin(int num)
{
    long long bin = 0;
    while(num>0)
    {
        bin = bin*10 + (num%2);
        num/=2;
    }
    long long rev = 0;
    while(bin>0)
    {
        rev= rev*10 + bin%10;
        bin/= 10;
    }
    return rev;
}
int sum(long long num)
{
    int s = 0;
    while(num>0)
    {
        s+= num%10;
        num/= 10;
    }
    return s;
}
int sumIndicesWithKSetBits(vector<int>& nums, int k) 
{
    int s = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(sum(toBin(i)) == k)
        {
            cout << nums[i] << endl;
            s+= nums[i];
        }
    }
    return s;
}
int main()
{
    vector<int> v={5,10,1,5,2};
    cout << sumIndicesWithKSetBits(v,1);
    return 0;
}
#include<math.h>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;    
int countSymmetricIntegers(int low, int high) 
{
    int count = 0, sum1 = 0, sum2 = 0;
    for(int i = low; i <= high; i++)
    {
        if(digcount(i)%2 == 0)
        {
            int temp = i;
            for(int j = 1; j <= digcount(i); j++)
            {
                if(j <= digcount(i)/2)
                {
                    sum1+= temp%10;
                    temp/= 10;
                }
                else
                {
                    sum2+= temp%10;
                    temp/=10;
                }
            }
        }
        if(sum1 == sum2)
        {
            cout << i;
            count++;
        }
        sum1 = 0; sum2 = 0;
    }
    return count;
}
int digcount(int num)
{
    int count = 0;
    while(num>0)
    {
        num/=10;
        count++;
    }
    return count;
}
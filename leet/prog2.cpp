#include <bits/stdc++.h>
#include <iostream>
using namespace std;

    long long minimumPossibleSum(int n, int target) {
        int arr[n];
        int i = 0, count = 0;
        long long sum = 0; 
        if(n < target/2)
        {
            target = 2*n;
        }
        for(int i = 1; i <= target/2; i++)
        {
            arr[i-1] = i;
            sum+= i;
            count++;
        }
        for(int i = target; count < n; i++)
        {
            arr[count] = i;
            count++;
            sum+= i;
        }
        return sum;
    }
    int main()
    {
        cout << minimumPossibleSum(16,6);
        return 0;
    }

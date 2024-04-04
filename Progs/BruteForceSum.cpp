#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
#include <cmath>
#include <fstream>
using namespace std;
ifstream inFile;
ofstream outFile;
class Solution
{
    public:
    void printS(int ind, int n, int arr[], int sum, int temp, vector<int>& ds)
    {
        if(ind == n)
        {
            if(sum == temp)
            {
                for(auto i: ds)    outFile << i << " ";
                outFile << endl;
            }
            return;
        }
        temp+= arr[ind];
        ds.push_back(arr[ind]);
        printS(ind+1,n,arr,sum,temp,ds);
        temp-= arr[ind];
        ds.pop_back();
        printS(ind+1,n,arr,sum,temp,ds);
        return;
    }

    bool printOne(int ind, int n, int arr[], int sum, int temp, vector<int>& ds)
    {
        if(ind == n)
        {
            if(sum == temp)
            {
                for(auto i: ds)    
                outFile << i << " ";
                outFile << endl;
                return true;
            }
            return false;
        }
        temp+= arr[ind];
        ds.push_back(arr[ind]);
        if(printOne(ind+1,n,arr,sum,temp,ds))
        return true;
        temp-= arr[ind];
        ds.pop_back();
        if(printOne(ind+1,n,arr,sum,temp,ds))
        return true;
        return false;
    }
    
    int printCount(int ind, int n, int arr[], int sum, int temp)
    {
        if(ind == n)
        {
            if(temp == sum)
            {
                return 1;
            }
            return 0;
        }
        temp+= arr[ind];
        int l = printCount(ind+1,n,arr,sum,temp);
        temp-= arr[ind];
        int r = printCount(ind+1,n,arr,sum,temp);
        return l+r;
    }
};

int main()
{
    inFile.open("io/input.txt");
    int n,sum;
    inFile >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        inFile >> arr[i];
    }
    inFile >> sum;
    inFile.close();
    outFile.open("io/output.txt");
    vector<int> ds1,ds2;
    Solution obj;
    obj.printS(0,n,arr,sum,0,ds1);
    outFile << endl << endl;
    obj.printOne(0,n,arr,sum,0,ds2);
    outFile << endl << endl;
    outFile << obj.printCount(0,n,arr,sum,0);
    outFile.close();
    return 0;
}
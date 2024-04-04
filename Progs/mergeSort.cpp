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
    private:
    void merge(vector<int>& arr, int low, int mid, int high)
    {
        vector<int> temp;
        int p1 = low, p2 = mid+1;
        while(p1 <= mid && p2 <= high)
        {
            if(arr[p1] < arr[p2])
            {
                temp.push_back(arr[p1++]);
            }
            else
            {
                temp.push_back(arr[p2++]);
            }
        }
        while(p1 <= mid)
        {
            temp.push_back(arr[p1++]);
        }
        while(p2 <= high)
        {
            temp.push_back(arr[p2++]);
        }
        for(int i = low; i <= high; i++)
        {
            arr[i] = temp[i-low];
        }
    }
    public:
    void mergeSort(vector<int>& arr, int low, int high)
    {
        if(low == high) return;
        int mid = low + (high-low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
};

int main()
{
    remove("io/output.txt");
    inFile.open("io/input.txt");
    outFile.open("io/output.txt");
    Solution obj;
    vector<int> arr;
    int n,x;
    inFile >> n;
    for(int i = 0; i < n; i++)
    {
        inFile >> x;
        arr.push_back(x);
    }
    for(auto i: arr)    outFile << i << " ";
    outFile << endl;
    obj.mergeSort(arr,0,n-1);
    for(auto i: arr)    outFile << i << " ";
    inFile.close();
    outFile.close();
    return 0;
}

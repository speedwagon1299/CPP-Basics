#include <iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;
void swap(int& a, int& b)
{
	int temp = a; 
	a = b; 
	b = temp;
}
int partition(int input[], int start, int end)
{
	int p1 = start, p2 = end, pivot = input[end];
	while(p1 < p2)
	{
		while(input[p1] < pivot && p1 < end)
		p1++;
		while(input[p2] >= pivot && p2 > start)
		p2--;
		if(p1<p2)
		swap(input[p1],input[p2]);
	}
	swap(input[p1],input[end]);
	return p1;
}
void quickSort(int input[], int start, int end)
{
	if(start >= end) return;
	int pi = partition(input, start, end);
	quickSort(input, start, pi-1);
	quickSort(input, pi+1, end);
}

int poss(int input[], int n)
{
    quickSort(input,0,n-1); int max;
    for(int i = 0; i < n; i++)
    {
        if(i >= input[i])
        max = input[i];
    }
    return max;
}

int main()
{
    int input[] = {6,4,2,7,5,3,4,2,1,3};
    cout << poss(input,sizeof(input)/sizeof(input[0]));
    return 0;
}
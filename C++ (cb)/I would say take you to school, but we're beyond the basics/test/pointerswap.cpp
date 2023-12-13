#include <iostream>
using namespace std;
int Sort(int*,int);
int main()
{
    cout << "Enter the 5 elements of the array" << endl;
    int arr[5];
    for(int i = 0; i < 5; i++)
    cin >> arr[i];
    Sort(arr,5);
    for(int i = 0; i < 5; i++)
    cout << arr[i] << " ";                                                                                                                       " ";
    return 0;
}
int Sort(int *pa, int n)
{
    if(n == 1)
    return 0;
    int* min = pa;
    for(int i = 1; i < n; i++)
    if(*min > *(pa+i))
    min = pa+i;
    int swap = *min;
    *min = *pa;
    *pa = swap;
    return Sort(pa+1,n-1);
}
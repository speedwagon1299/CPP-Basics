#include <iostream>

using namespace std;
int binSearch(int l, int u, int s, int arr[])
{
    int mid = (l+u)/2;
    if(l > u)
        return -2;
    else if(arr[mid] > s)
        return binSearch(l,mid-1,s,arr);
    else if(arr[mid] < s)
        return binSearch(mid+1,u,s,arr);
    else
        return mid;
}
int main()
{
    cout << "Enter the size of the array: " << endl;
    int n;
    cin >> n;
    cout << "\nEnter the elements of the array: " << endl;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to be searched: " << endl;
    int s;
    cin >> s;
    cout << "\n\nElement found at position " << binSearch(0,n-1,s,arr)+1 << endl;
    return 0;
}

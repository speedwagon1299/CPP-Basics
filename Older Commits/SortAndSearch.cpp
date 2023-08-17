#include <iostream>

using namespace std;
void SelectionSort(int arr[])
{
    int swap;
    for(int i = 0; i < 5; i++)
    {
        for(int j = i+1; j < 5; j++)
        {
            if(arr[i] > arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << flush;
    }
}
void BubbleSort(int arr[])
{
    int swap;
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = swap;
            }
        }
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << flush;
    }
}
int BinSearch(int arr[], int a)
{
    int mid = 0;
    int l = 0, u = 4;
    while(l <= u)
    {
        mid = (l+u)/2;
        if(a == arr[mid])
            return mid;
        else if(a > arr[mid])
        {
            l = mid + 1;
        }
        else
            u = mid - 1;
    }
    return -2;
}
int main()
{
    cout << "Enter the 5 elements of the array: " << endl;
    int arr[10];
    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter 's' for selection sort and 'b' is bubble sort: " << endl;
    char ch;
    cin >> ch;
    switch(ch)
    {
        case 's':
        {
            SelectionSort(arr);
            break;
        }
        case 'b':
        {
            BubbleSort(arr);
            break;
        }
        default:
            cout << "Invalid selection" << endl;
    }
    cout << "\nEnter the number to be searched: " << endl;
    int search;
    cin >> search;
    cout << "It is found in position " << BinSearch(arr,search)+1 << flush;
    return 0;
}

#include <iostream>
using namespace std;
void bubbleSortRec(int arr[], int n, int i)
{
    int swap;
    if(i == n-2)
        return;
    else
    {
        for(int j = 0; j < n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
        return bubbleSortRec(arr,n,i+1);
    }
}
int main()
{
    cout << "Enter the number of elements of the array: " << endl;
    int num;
    cin >> num;
    int arr[num];
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    bubbleSortRec(arr,num,0);
    for(int i = 0; i < num; i++)
    {
        cout << arr[i] << " " << flush;
    }
    return 0;
}

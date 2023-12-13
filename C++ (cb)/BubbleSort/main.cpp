#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the size of the array: " << flush;
    cin >> num;
    cout << endl;
    int arr[num] = {};
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int swap = 0;
    for(int i = 0; i < num-1; i++)
    {
        for(int j = 0; j < num-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = swap;
            }
        }
    }
    cout << endl;
    for(int i = 0; i < num; i++)
    {
        cout << arr[i] << " " << flush;
    }
    return 0;
}

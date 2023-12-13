#include <iostream>

using namespace std;

int main()
{
    int arr[3][3] = {};
    cout << "Enter the elements of the 3x3: " << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nEntered Matrix:\n" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " " << flush;
        }
        cout << endl;
    }
    cout << "\n" << endl;
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {

    }
    return 0;
}

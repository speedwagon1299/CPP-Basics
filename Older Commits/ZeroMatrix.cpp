#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the order of the matrix:" << endl;
    int r,c;
    cin >> r;
    cin >> c;
    cout << "Enter the elements of the matrix:" << endl;
    int arr[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
        cin >> arr[i][j];
    cout << "\n\nEntered Matrix:" << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << arr[i][j] << " " << flush;
        cout << endl;
    }
    /*copying the matrix so created zeroes do not affect the
     outcome of the next elements to be converted to zeroes*/
    int arr2[r][c];
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
        arr2[i][j] = arr[i][j];
    cout << "\n\nAltered Matrix:" << endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(arr[i][j] == 0)
            {
                for(int k = 0; k < r; k++)
                    arr2[k][j] = 0;     //assigning elements of that column the value of 0
                for(int k = 0; k < c; k++)
                    arr2[i][k] = 0;     //assigning elements of that row the value of 0

            }
        }
    }
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
            cout << arr2[i][j] << " " << flush;
        cout << endl;
    }
    return 0;
}

#include <iostream>
int main()
{
    int n = 3;
    int min = 0, max = n, i = 0, j = 0;
    int arr[n][n];
    std::cout << "Enter the values:" << endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
        }
    }
    while(min != max)
    {
        for(j = min; j < max; j++)
        std::cout << arr[min][j] << " ";
        
    }
}
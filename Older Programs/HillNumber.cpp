#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter the number to be checked:" << endl;
    int num, flag = 0, count = 0;
    cin >> num;
    int input = num;
    int rev = 0;
    while(num > 0)
    {
        rev = rev*10 + num%10;
        num/=10;
        count++;
    }
    num = input;
    int arr[count];
    for(int i = 0; i < count; i++)
    {
        arr[i] = rev%10;
        rev/= 10;
    }
    cout << endl;
    int max = 0;
    for(int i = 1; i < count; i++)
        if(arr[i] > arr[max])
        max = i;
    if(max == count-1)
        flag = 1;
    int arr1[max+1],arr2[count-max-1];
    for(int i = 0; i <= max; i++)
        arr1[i] = arr[i];
    for(int i = max; i < count; i++)
        arr2[i-max] = arr[i];
    for(int i = 0; i < max; i++)
    {
        if(arr1[i] >= arr1[i+1])
        {
            flag = 1;
            break;
        }
    }
    for(int i = 0; i < count-max-2; i++)
    {
        if(arr2[i] <= arr2[i+1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        cout << "It is not a hill number" << endl;
    }
    else
    {
        cout << "It is a hill number" << endl;
    }
    return 0;
}

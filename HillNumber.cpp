#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "Enter the number to be checked:" << endl;
    int num, flag = 0, count = 0;
    cin >> num;
    int input = num;    //saving unaltered value of num
    while(num > 0)
    {
        num/= 10;
        count++;    //counting digits
    }
    num = input;    //giving num its original value
    int arr1[10], arr2[10];     //arrays to store each half part of the number
    char prop;  //to see if num has even or odd number of digits
    if(count%2 == 0)
        prop = 'e';
    else
        prop = 'o';
    switch(prop)
    {
        case 'o':
        {
             int mid = 0;
            for(int i = count-1; i >= count/2; i--)
            {
                arr2[i - count/2] = num%10;     //making array with the second half of the number
                mid = num%10;
                num/=10;
            }
            arr1[count/2] = mid;
            for(int i = (count/2); i >= 0; i--)
            {
                arr1[i] = num%10;   //making an array with the first half of the number
                num/=10;
            }
            for(int i = 0; i < count/2; i++)
            {
                if(arr1[i] > arr1[i+1])
                {
                    flag = 1;   //flag if its not in ascending order
                    break;
                }
                if(arr2[i] < arr2[i+1])
                {
                    flag = 1;   //flag if its not in descending order
                    break;
                }
            }
        }
        break;
        case 'e':
        {
            for(int i = count-1; i >= count/2; i--)
            {
                arr2[i - count/2] = num%10;     //making array with the second half of the number
                num/=10;
            }
            for(int i = (count/2 - 1); i >= 0; i--)
            {
                arr1[i] = num%10;   //making an array with the first half of the number
                num/=10;
            }
            for(int i = 0; i < (count/2-1); i++)
            {
                if(arr1[i] > arr1[i+1])
                {
                    flag = 1;   //flag if its not in ascending order
                    break;
                }
                if(arr2[i] < arr2[i+1])
                {
                    flag = 1;   //flag if its not in descending order
                    break;
                }
            }
        }
        break;
        default:
        {
            cout << "Invalid" << endl;
            system(0);
        }+

    }
    if(count <= 2)  //if count less than two it automatically is not a hill number
        flag = 1;
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

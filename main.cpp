#include <iostream>
using namespace std;
int fact(int num)
{
    if(num == 1)
        return num;
    else
        return num*fact(num-1);
}
int main()
{
    cout << "Enter the numbers factorial to be calculated :" << endl;
    int num;
    cin >> num;
    cout << "\nFactorial is: " << fact(num);
    return 0;
}

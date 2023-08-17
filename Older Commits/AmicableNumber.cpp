#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the two numbers to be checked: " << endl;
    int num1, num2;
    cin >> num1;
    cin >> num2;
    int sum1 = 1, sum2 = 1;
    for(int i = 2; i <= num1/2; i++)
        if(num1%i == 0)
            sum1+=i;
    for(int i = 2; i <= num2/2; i++)
        if(num2%i == 0)
            sum2+= i;
    if(num1 == sum2 && num2 == sum1)
        cout << "The numbers are amicable" << endl;
    else
        cout << "The numbers are not amicable" << endl;
    return 0;
}

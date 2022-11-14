#include <iostream>
using namespace std;
int rec1(int num)
{
    int sum = 0;
    while(num > 0)
    {
        sum+= num%10;
        num/= 10;
    }
    return sum;
}
int rec2(int num)
{
    if(num < 10)
        return num;
    else
    {
        return num%10 + rec2(num/10);
    }
}
int main()
{
    cout << "Enter the number" << endl;
    int num;
    cin >> num;
    cout << "\nSum of digits without recursion: " << rec1(num) << endl;
    cout << "\nSum of digits with recursion: " << rec2(num) << endl;
    return 0;
}

#include <iostream>
using namespace std;
int count(int);
int main()
{
    cout << "Enter the value of n: " << endl;
    int n;
    cin >> n;
    cout << "\nCount = " << count(n)-1;
}
int count(int n)
{
    if(n == 1 || n == 2)
    {
        return 2;
    }
    else
    {
        static int sum = 0;
        for(int i = n; i > 0; i--)
        {
            sum+= count(i);
        }
        return (sum+1)/2;
    }
}
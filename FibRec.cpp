#include <iostream>

using namespace std;
Fib(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
    {
        return Fib(n-1) + Fib(n-2);
    }
}
int main()
{
    for(int i = 0; i < 40; i++)
    {
        cout << Fib(i) << " " << flush;
    }
    return 0;
}

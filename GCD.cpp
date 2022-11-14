#include <iostream>
using namespace std;
int GCD(int p, int q)
{
    if(q == 0)
        return p;
    else
        return GCD(q,p%q);
}
int main()
{
    cout << "Enter the two numbers' GDP to be found:\n" << endl;
    int a,b;
    cin >> a >> b;
    if(b > a)
    {
        int swap = a;
        a = b;
        b = swap;
    }
    cout << "The GCD of " << a << " and " << b << " is: " << GCD(a,b) << endl;
    return 0;
}

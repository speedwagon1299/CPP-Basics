#include <iostream>
using namespace std;
int main()
{
    cout << "The Patterns are : \n" << endl;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* " << flush;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "* " << flush;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 5; j > i; j--)
        {
            cout << "  " << flush;
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "* " << flush;
        }
        cout << endl;
    }
    cout << endl;
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 5; j > i; j--)
        {
            cout << "  " << flush;
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "* " << flush;
        }
        cout << endl;
    }
    return 0;
}

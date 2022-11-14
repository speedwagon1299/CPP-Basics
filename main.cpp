#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter the string to be altered: " << endl;
    string str;
    //cin.get(str,50);
    getline(cin,str);
    int count;  //to store length of inputted string
    char swap;  //external variable to swap the elements
    for(int i = 0; str[i] != '\0'; i++)
        count++;
    for(int i = 0; i < (count-1); i++)
    {
        for(int j = 0; j < (count-i-1); j++)
        {
            if(str[j] > str[j+1])
            {
                swap = str[j];
                str[j] = str[j+1];
                str[j+1] = swap;
            }
        }
    }
    cout << "\n\nString in alphabetical order : " << str << endl;
    return 0;
}

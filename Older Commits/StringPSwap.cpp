#include <iostream>
#include <string.h>
using namespace std;
void swap(char* a, char* b, int n1, int n2)
{
    int max = n2;
    char swap;
    if(n1 > n2)
        max = n1;
    for(int i = 0; i < max; i++)
    {
        swap = *a;
        *a = *b;
        *b = swap;
        a++;
        b++;
    }

}
int main()
{
    cout << "Enter the two strings:" << endl;
    char str1[20], str2[20];
    gets(str1);
    gets(str2);
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    swap(str1,str2, n1, n2);
    cout << "swapped " << str1 << " " << str2 << flush;
    return 0;
}

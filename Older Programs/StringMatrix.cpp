#include <iostream>
#include <string.h>
using namespace std;
char arr[20][20];
int num;
void accept()
{
    cout << "Enter the number of strings:" << endl;
    cin >> num;
    cout << "Enter the strings:" << endl;
    for(int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
}
void charBubbleSort(char ch[])
{
    int count = 0;
    char swap;
    for(int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    for(int i = 0; i < count-1; i++)
    {
        for(int j = 0; j < count-i-1; j++)
        {
            if(ch[j] > ch[j+1])
            {
                swap = ch[j];
                ch[j] = ch[j+1];
                ch[j+1] = swap;
            }
        }
    }
}
void stringBubbleSort(char a[][20])
{

    char swap[20];
    for(int i = 0; i < num-1; i++)
    {
        for(int j = 0; j < num-i-1; j++)
        {
            if(strcmp(a[j],a[j+1]) > 0)
            {
                strcpy(swap,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],swap);
            }
        }
    }
}
int main()
{
    accept();
    cout << endl;
    stringBubbleSort(arr);
    for(int i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < num; i++)
    {
        charBubbleSort(arr[i]);
        cout << arr[i] << endl;
    }
    return 0;
}

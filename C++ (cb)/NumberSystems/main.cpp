#include <iostream>
#include <string>
using namespace std;
long binCon(int a)
{
    long bin = 0;
    while(a > 0)    //to get the reversed binary
    {
        bin = bin*10 + a%2;
        a/= 2;
    }
    long rev = 0;
    while(bin > 0)
    {
        rev = rev*10 + bin%10;  //to reverse binary
        bin/= 10;
    }
    return rev;
}
long octCon(int a)
{
    long oct = 0;
    while(a > 0)    //to get the reversed octal
    {
        oct = oct*10 + a%8;
        a/= 8;
    }
    long rev = 0;
    while(oct > 0)
    {
        rev = rev*10 + oct%10;  //to reverse octal
        oct/= 10;
    }
    return rev;
}
string rev(string str)
{
    char swap = ' ';
    for(int i = 0; i < size(str)/2; i++)    //to swap first half with last half
    {
        swap = str.at(i);
        str.at(i) = str.at(size(str)-1-i);
        str.at(size(str)-1-i) = swap;
    }
    return str;
}
string hexaCon(int a)
{
    string hexa = "";
    while(a > 0)    //to get the reversed hexadecimal
    {
        if(a%16 < 10)
            hexa+= (char)(a%16 + 48);   //adding to ASCII to get 0~9 remainder
        else
            hexa+= (char)(a%16 + 55);   //adding to ASCII to get A~F remainder
        a/=16;
    }
    return rev(hexa);   //reversing to get final hexadecimal
}
int main()
{
    cout << "Enter the decimal number to be converted:" << endl;
    int num;
    cin >> num;
    cout << "Binary: " << binCon(num) << endl;
    cout << "\nOctal: " << octCon(num) << endl;
    cout << "\nHexadecimal: " << hexaCon(num) << endl;
    return 0;
}

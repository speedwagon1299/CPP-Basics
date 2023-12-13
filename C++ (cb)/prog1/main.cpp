#include <iostream>
int main()
{
    char str[] = "HI there";
    char* p = str;
    std::cout << *(p+4);
    return 0;
}

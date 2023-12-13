#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s1[50], s2[50];
    int i,j,flag,input=0;
    gets(s1);
    gets(s2);
    for(i = 0; s1[i] != '\0'; i++)
    {
        flag = 0;
        input = i;
        if(s1[i] == s2[0])
        {
            for(j = 1; s2[j] != '\0'; j++)
            {
                if(s1[++i] != s2[j])
                {
                    flag = 0;
                    break;
                }
                flag = 1;
            }
        }
        if(flag == 1)
        {
            for(j = i; s1[j] != '\0'; j++)
            {
                s1[input++] = '0';
            }
        }
    }
    puts(s1);
    return 0;
}

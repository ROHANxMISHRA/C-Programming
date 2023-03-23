/** 
 * C program to convert string to uppercase
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    int i;

    /* Input string from user */
    printf("\n Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        /*
         * If current character is lowercase alphabet then
         * convert it to uppercase.
         */
        if(str[i]>='a' && str[i]<='z')     // a=97-32=65 , A=65
        {
            str[i] = str[i] - 32;
        }
    }

    printf("\n Uppercase string : %s",str);
    return 0;
}

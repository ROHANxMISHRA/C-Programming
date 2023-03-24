/**
 * C program to find reverse of a string
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str[MAX_SIZE], reverse[MAX_SIZE];
    int i, strIndex, revIndex, len;

    /* Input string from user */
    printf("\n Enter any string: ");
    gets(str);

    /* Find length of string */
    i = 0;
    while(str[i] != '\0') i++;

    len = i;

    /* 
     * Store each character from end of original string 
     * to reverse string
     */
    revIndex = 0;
    strIndex = len - 1;
    while(strIndex >= 0)
    {
        reverse[revIndex] = str[strIndex];

        strIndex--;
        revIndex++;
    }
    reverse[revIndex] = '\0';

    printf("\n Original string = %s\n", str);
    printf("\n Reverse string = %s", reverse);

    return 0;
}

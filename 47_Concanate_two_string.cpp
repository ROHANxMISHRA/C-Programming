/**
 * C program to concatenate two strings 
 */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j;

    /* Input two strings from user */
    printf("\n Enter first string: ");
    gets(str1);
    printf("\n Enter second string: ");
    gets(str2);

    /* Move till the end of str1 */
    i=-1;
    while(str1[++i]);

    /* Copy str2 to str1 */
    j = 0;
    while(str1[i++] = str2[j++]);

    printf("\n Concatenated string = %s", str1);

    return 0;
}

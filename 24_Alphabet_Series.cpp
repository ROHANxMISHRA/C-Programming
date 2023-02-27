/*C program to print all alphabets from a to z */

/* #include <stdio.h>

int main()
{
    char ch='a';   // for loop ch should be not declared but for while it should

    printf("\n Alphabets from a - z are: \n");
    
 /*   for(ch='a'; ch<='z'; ch++)
    {
        printf("  %c \n", ch);
    

while(ch<='z')
    {
        printf(" %c \n", ch);
        ch++;
    }  */
    

/* C program to display all alphabets using while loop */

#include <stdio.h>

int main()
{
    int ch = 97;

    printf("\n Alphabets from a - z are: \n");
    while(ch<=122)
    {
        printf(" %c \n", ch);
        ch++;
    }

    return 0;
}






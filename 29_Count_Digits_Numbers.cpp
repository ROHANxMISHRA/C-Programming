/* C program to count number of digits in an integer  */

#include <stdio.h>

int main()
{
    long long num;
    int count = 0;

    /* Input number from user */
    printf("\n Enter any number: ");
    scanf("%lld", &num);

    /* Run loop till num is greater than 0 */
    do
    {
        /* Increment digit count */
        count++;                              // count= 3 

        /* Remove last digit of 'num' */
        num /= 10;                            // num=359 /10   num= 35, num= 3, num= 0
        
    } while(num !=0);

    printf("\n Total digits: %d", count);

    return 0;
}

/* C program to find sum of its digits of a number */

#include <stdio.h>

int main()
{
    int num, sum=0;

    /* Input a number from user */
    printf("\n Enter any number to find sum of its digit: ");
    scanf("%d", &num);

    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        sum = sum+ num % 10;        //  123 % 10= 3+0= Sum= 3// 12 % 10= 2+3= 5 Sum// 1%10= 1+5= 6 

        /* Remove last digit from num */
        num = num / 10;             // 123/10= 12, num= 12  // 12 /10= 1= num// 1/10= 0
    }

    printf("\n Sum of digits = %d", sum);

    return 0;
}

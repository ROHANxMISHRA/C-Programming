/*C program to find sum of all elements of array  */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, n, sum=0;

    /* Input size of the array */
    printf("\n Enter size of the array: ");
    scanf("%d", &n);

    /* Input elements in array */
    printf("\n Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);    // [0]= 0, [1]=7, [2]=10, [3]=15, [4]= 20 
    }

    /* Add each array element to sum     */
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];   // sum= 0+0= 0,sum=0+7= 7+10=17= 17+15= 32= 32+20= 52
    }


    printf("\n Sum of all elements of array = %d", sum);

    return 0;
}

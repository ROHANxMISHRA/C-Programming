/* C program to read and print elements in an array */

#include <stdio.h>
#define MAX_SIZE 1000           // Maximum array size

int main()
{
    int arr[MAX_SIZE];         // Declare an array of MAX_SIZE
    int i, N;

    /* Input array size */
    printf("\n Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("\n Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);   // arr[0]=1, arr[1]=2, arr[2]=3, arr[3]=4, arr[4]=5 
    }

    /* Print all elements of array    */
    printf("\n Elements in array at Index 3 is:  %d %d ", arr[3], arr[5]);
   
   /* for(i=0; i<N; i++)
    {
        printf("%d ", arr[3]);    // 1,2,3,4,5
    }  */

    return 0;
}

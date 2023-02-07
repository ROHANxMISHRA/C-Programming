//Program to Print ASCII Value

#include <stdio.h>
int main() 
{  
    char c;
    printf("\n Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("\n ASCII value of %c = %d \n", c, c);
    
    return 0;
}

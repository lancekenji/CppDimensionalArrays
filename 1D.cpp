#include <stdio.h>

int main()
{
    int a[5]; //array declare, only 5 elements accepted.
    int b; // for "for loop"
    
    printf("Enter the values in the array [upto 5]\n");
    
    for(b = 0; b < 5; b++)
    {
        printf("The value of array (Position: [%d]): ", b);
        scanf("%d", &a[b]);
    } 

    printf("\n[+] Printing elements of the array [1D Array] [+] \n\n\n\n\n");
	
    for(b = 0; b < 5; b++)
    {	printf("\t");
        printf("|_%d_|", a[b]);
    }
    printf("\n\n\n\n\n");
    return 0;
}

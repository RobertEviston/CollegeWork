/* This is a program designed to read in 5 numbers to an array
and copy the contents of that array into another one.
Author: Robert Eviston
Date: 4th November 2013
*/
#include <stdio.h>
#define ARRAY 5
main ()
{
    int nums[ARRAY];
    int num2[ARRAY];
    int i;
    
    printf("Please enter 5 numbers\n");
    
    for (i=0; i<5;i++) // loops  until i = 5
    {
        scanf("%d", &nums[i]); // Reads in 5 numbers
        num2[i] = nums[i]; // Copies values from nums into num2
    } // End for ( )
    flushall();
    
    printf("The numbers in the second array are: ");
    
    for (i=0; i<5;i++) // loops until i = 5
    {
        printf("%d, ", num2[i]);
    } // End 2nd for ( )
    
    getchar();
} // End main
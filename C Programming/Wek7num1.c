/* Program designed with an array to see 
elements and what is in a[8] after code is exectued.
Author: Robert Eviston
Date: 11th November 2013
*/
#include <stdio.h>
#define SIZE 9
main()
{
    int ARRAY1[SIZE];
    int i;

    for (i=0;i<10;i++)
    {
        ARRAY1[i] = 9 - i; // Number displayed is ( 9 - number) eg 5 is: 9 - (5) = 4
    }
    
    for (i=0;i<10;i++)
    {
        ARRAY1[i] = ARRAY1[ARRAY1[i]];
    }
    printf("Content of a[8] is %d", ARRAY1[8]);
        
        getchar();
} // End main
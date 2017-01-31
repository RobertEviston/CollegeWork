/* Program that uses functions
Name: Robert Eviston
Date: 28th January 2013
*/

#include <stdio.h>
#define NUM 10

/* Declare function prototype */
void stars (void);
main()
{
    printf("Before function call\n");
    // Calls function
    stars();
    printf("\nAfter function call\n");
    getchar();
} // End main

/* Implement function stars() */

void stars()
{
    int i;
    
    for (i=0;i<NUM;i++) //Counts up 10 symbolic names number( 10) and prints a star for each
    {
        printf("*");
    } // End for()
} // End stars()

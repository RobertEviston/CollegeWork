/* Program that uses functions
Name: Robert Eviston
Date: 28th January 2013

Fuctions
(Methods) 

'function_name()' eg: main(), printf(), scanf(), getch()
*/

#include <stdio.h>
#define NUM 5

/* Declare function prototype */
void stars (void);
void stors (void);
main()
{
    printf("Before function call\n");
    
    // Call function
    
    stars();
    printf("\nAfter function call\n");
    stors();
    printf("\nAfter another function call\n");
    stars();
    getchar();
} // End main

/* Implement function stars() */

void stars()
{
    int i;
    
    for (i=0;i<NUM;i++)
    {
        printf("*");
    } // End for()
} // End stars()

void stors()
{
    int j;
    
    for(j=0;j<NUM;j++)
    {
        printf("*.*");
    }
} // End stors()


/* Recursive function is if called by itself and can start a virus */
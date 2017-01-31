/* Program designed to read a series of 
ages and find the oldest/youngest and average.
Author: Robert Evston
Date: 24th October 2013
*/
#include <stdio.h>
main()
{
    int ages[5];
    int i;
    int youngest,oldest;
    int total_age;
    
    total_age = 0;
    
    printf("Please enter the ages of 5 people\n");
    
    for(i=0;i<5;i++)
    {
        scanf("%d", &ages[i]);
        flushall();
        total_age = total_age + ages[i];
    }
    // Assume the youngest and oldest are contained in the 1st element of the array, i.e ages [0]
    
    youngest = ages[0];
    oldest = ages[0];
    
    // Find the youngest and the oldest
    
    for(i=0;i<5;i++)
    {
        if (ages[i] > oldest)
        {
            oldest = ages[i];
        } // end if
        if (ages[i] < youngest)
        {
            youngest = ages[i];
        } // end if
    } // end for ( )
    
    printf("\nThe youngest is %d", youngest);
    printf("\nThe oldest is %d", oldest);
    printf("\nThe average age is %1f", (float)total_age/5);
    
    getchar();
} // end main





/* define SIZE 5
use UPPER CASE with symbolic names
*/
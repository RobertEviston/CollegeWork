/* This program uses an array to
calculate the average age of people  
Author: Robert Eviston
Date: 24th October 2013
*/
#include <stdio.h>
main ()
{
    int ages[5];
    int i;
    int total_age;
    float average_age;
    
    total_age = 0;
    average_age = 0;
    
    printf("Enter the ages\n");
    
    for (i=0; i<5;i++) // loops until i = 5
    {
        scanf("%d", &ages[i]);
        flushall();
        total_age = total_age + ages[i];
    } // end 1st for ( )
    
    average_age = (float) total_age/5;
   
    printf("\nThe average age is %f", average_age);
    
    for (i=0; i<5;i++) // loops until i = 5
    {
        printf("%d", i);
    } // end 2nd for ( )
    
    getchar();
} // end main()
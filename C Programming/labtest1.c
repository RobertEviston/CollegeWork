/* This program is designed so a user enters a 4 
digit year and the program checks if it is a leap year.
Author: Robert Eviston.
Date: 21st October 2013.
*/
#include <stdio.h>
main()
{
    int year;
    
    printf("Please enter a 4 digit year: \n");
    scanf("%d", &year);
    flushall();
    
    if (year != 100)
        if (year % 4 == 0)
            printf("This is a leap year");
        else if (year % 400 == 0)
            printf("This is a leap year");
        else
            printf("This is not a leap year");
    
    else 
            printf("This is not a leap year");
    getchar();
    
}// end main
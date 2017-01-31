/* This program returns a value from a function to tell whether a number is odd or even
Name: Robert Eviston
Date: 13/02/2014
*/

#include <stdio.h>

int checker(int);
main()
{
    int num = 0;
    int return_value;
    printf("Please enter a number to be checked if odd or even\n");
    scanf("%d", &num);
    flushall();
    
    return_value = checker(num);
    
    if(return_value == 0)
    {
        printf("\n0");
    }
    else
    {
        printf("\n1");
    }
    
    printf("\n\n1: represents an even number\n0: represents an odd number");
    getchar();
} // end main

int checker(int number)
{
    if((number %2) == 0)
    {
        return(1);
    }
    else
    {
        return(0);
    }
} // end checker
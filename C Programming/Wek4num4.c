/* This program is designed so that the user enters 3 floats and the 1st is
displayed to 4 decimals, the 2nd to 3 decimals and the last to no decimal places.
Author: Robert Eviston
Date: 7th October 2013
*/

#include <stdio.h>
main()
{
    float num1;
    float num2;
    float num3;
    
    printf("Please enter three numbers with decimal places");
   
    scanf("%1s", &num1);
    scanf("%1s", &num2);
    scanf("%2s", &num3);
    flushall();
    
    printf("Your three numbers are: \n%1s \n%1s \n%2s", num1, num2, num3);
    
    getchar();
}
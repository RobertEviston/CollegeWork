/* This program is designed so a user enters a temperature
reading in Farenheit and the program converts it to Degrees Celcius.
Author: Robert Eviston
Date: 7th October 2013
*/
#include <stdio.h>
main()
{
    float celcius;
    float farenheit;
    
    printf("Enter a temperature in degress Farenheit: ");
    scanf("%f", &farenheit);
    flushall();
    
    celcius = (farenheit - 32.0) * (5.0/9.0);
    
    printf("This temperature converted is %2.2f degrees Celcius", celcius);
    
    getchar();
}
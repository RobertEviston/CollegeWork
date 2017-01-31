/* This program allows a user to input 3 Farenheit temperature 
readings and then displays the temperatures alongside their value in temperature Celcius.
Author: Robert Eviston
Date: 4th November 2013
*/
#include <stdio.h>
#define ARRAY 3
main ()
{
    float temps[ARRAY];
    float celcius[ARRAY];
    int i;
    
    printf("Please enter 3 Farenheit values\n");
    
    for (i=0; i<3;i++) // Loops until i = 3
    {
        scanf("%f", &temps[i]); // Reads in 3 temperatures
        celcius[i] = (temps[i] - 32.0) * (5.0/9.0);
    } // End 1st for ( )
    flushall();
    
    printf("The two versions of your temperature readings are\n");
    printf("On the left are the Farenheit readings and on the right are the Celcius readings\n");
    
    for (i=0; i<3;i++) // Loops until i = 3
    {
        printf("%.2f = %.2f\n", temps[i], celcius[i]);
    
    } // End 2nd for ( )
    
    getchar();
} // End main
        
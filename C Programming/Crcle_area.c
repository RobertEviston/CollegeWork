/* This program is designed to Calculate and display area of 
a Circle with Radius 4.8cm and we assumme pi is 3.14.
Author: Robert Eviston
Date: 30th September 2013 */

#include <stdio.h>

main()
{
    float radius;
    float pi;
    
    radius = 4.8;
    pi = 3.14;
    
    printf("The area of the circle is %f", pi * (radius * radius));
    
    getchar();
    
}
/* This program is designed to Calculate and display
the volume of a cube with sides uniform sides of 2.8m.
Author: Robert Eviston
Date: 30th September 2013 */

#include <stdio.h>

main()
{
    float sides;
    float sum;
    
    sides = 2.8;
    sum = sides * sides * sides;
    
    printf("The volume of a cube with sides 2.8m is %f", sum);
    
    getchar();
}
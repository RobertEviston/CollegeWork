/* This program is designed to show
3 floating point numbers to certain decimal places.
Author: Robert Eviston
Date: 7th October 2013
*/
#include <stdio.h>
main()
{
    float v1;
    float v2;
    float v3;
    
    v1 = 5;
    v2 = -4.5;
    v3 = 11.25;
    
    printf("v1 = %1.1f, v2 = %2.1f, v3 = %2.2f", v1, v2, v3);
    
    getchar();
}

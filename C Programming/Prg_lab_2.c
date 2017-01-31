/*This is a program designed to Calculate and display the sum of Integers 1 - 5, 
and Calculate and display average of floating-point numbers: 1.0,1.1,1.2, ... 2.0
Author: Robert Eviston
Date: 30th September 2013 */ 

#include <stdio.h>

main()
{
    int num1;
    float flo1;
    float flo2;
    
    num1 = 1 + 2 + 3 + 4 + 5;
    flo1 = (1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5) /6;
    flo2 = (1.6 + 1.7 + 1.8 + 1.9 + 2.0) /5;
    
    printf("The Sum of the integers 1 - 5 is %d\n", num1);
    printf("The Average of the floats is %f", (flo1 + flo2) /2 );
    
    getchar();
    
}
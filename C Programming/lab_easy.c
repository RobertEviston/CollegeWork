/* This program is designed to Calculate and display
following sums, 15 + 10, 15 - 10, 15 * 10, 15 / 10, 15 % 3.
Author: Robert Eviston
Date: 30th September 2013 */

#include <stdio.h>

main()
{
    int sum1;
    int sum2;
    int sum3;
    float sum4;
    float sum5;
    
    sum1 = 15 + 10;
    sum2 = 15 - 10;
    sum3 = 15 * 10;
    sum4 = 15 / 10;
    sum5 = 15 % 3;
    
    printf("The Calculations are as follows... \n1. %d\n", sum1);
    printf("2. %d\n", sum2);
    printf("3. %d\n", sum3);
    printf("4. %f\n", sum4);
    printf("5. %f\n", sum5);
    
    getchar();
}
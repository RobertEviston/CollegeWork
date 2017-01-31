/* This program is designed to Calculate and 
display the remainder for arithmetic operations.
Author: Robert Eviston
Date: 30th September 2013 */

#include <stdio.h>

main()
{
    float var1;
    float var2;
    float var3;
    float var4;
    float var5;
    float var6;
    
    var1 = 2 % 2;
    var2 = 3 % 2;
    var3 = 5 % 2;
    var4 = 7 % 3;
    var5 = 100 % 33;
    var6 = 100 % 7;
    
    printf("The following remainders are.. \n1. %f\n", var1);
    printf("2. %f\n", var2);
    printf("3. %f\n", var3);
    printf("4. %f\n", var4);
    printf("5. %f\n", var5);
    printf("6. %f\n", var6);
    
    getchar();

    
}
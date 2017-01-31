/*mixed data type expression
*/
#include <stdio.h>

main()
{
    int num1 = 10;
    float num2 = 2.5;
    float num3;
    int num4;
    float num5;
    
    num3 = num1/num2; // Mixed expression
    num4 = num1/num2;
    num5 = num1/4.0;    // Mixed expression
    //if num1/4 there is a sneaky run-time error as they are both integers.
    //It will produce 2.0 instead of 2.5.
    
    /* OR num5 = (float)var/4;      The '(float)' is a "cast" */
    
    printf("num3 is %f, num4 is %d, num5 is %f", num3, num4, num5);
    
    getchar();
    
    // end main()
}
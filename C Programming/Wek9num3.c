/* This program declares to float numbers and uses pointers to locate them.
Author: Robert Eviston
Date: 25th November 2013
*/
#include <stdio.h>
main()
{
    float num1;
    float num2;
    float *ptr1;
    float *ptr2;
    
    num1 = 0.5;
    num2 = 1.5;
    ptr1 = &num1;
    ptr2 = &num2;
    
    printf("%.2f and %p\n", num1, &num1);
    printf("%.2f and %p\n", num2, &num2);
    printf("%p and %p\n", &ptr1, &ptr2);
    printf("%p and %p\n", ptr1, ptr2);
    printf("%.2f and %.2f", *ptr1, *ptr2);
    
    getchar();
    
} // End main
/* This program is designed to read in 
4 numbers and display them in reverse order.
Author: Robert Eviston
Date: 7th October 2013
*/
#include <stdio.h>
main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    
    printf("Please Enter 4 Numbers: ");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);
    flushall();
    
    printf("You entered in reverse order: %d, %d, %d, %d.", num4, num3, num2, num1);
    getchar();
    
}
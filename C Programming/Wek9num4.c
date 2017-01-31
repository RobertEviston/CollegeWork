/* This program asks the user to enter 2 integers and display the sum using pointer variables.
Author: Robert Eviston
Date: 25th November 2013
*/
#include <stdio.h>
main()
{
    int num1;
    int num2;
    int *ptr1;
    int *ptr2;
    int *sum;
    
    ptr1 = &num1;
    ptr2 = &num2;
    
    printf("Please enter 2 integers\n");
    scanf("%d", *ptr1);
    scanf("%d", *ptr2);
    flushall();
    
    *sum = *ptr1 + *ptr2;
    
    printf("%d\n", *sum);
    
    getchar();

} // End main
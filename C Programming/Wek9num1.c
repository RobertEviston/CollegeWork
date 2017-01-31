/* This program is designed to display the contents 
of two integers and they're pointer variables.
Author: Robert Eviston
Date: 25th November 2013
*/
#include <stdio.h>
main()
{
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;
    
    num1 = 1;
    char1 = 'A';
    ptr1 = &num1;
    ptr2 = &char1;
    
    printf("num1 contains %d and is stored at %p\n", num1, &num1);
    printf("char1 contains %c and is stored at %p\n", char1, &char1);
    printf("ptr1 contains %p\n", ptr1);
    printf("ptr2 contains %p\n", ptr2);
    printf("ptr1 holds the value %d and ptr2 holds the values %c\n", *ptr1, *ptr2);
    
    getchar();
    
} // End main
    
    
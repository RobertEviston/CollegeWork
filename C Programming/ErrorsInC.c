/*Program to illustrate errors in a C program.
Date: 23rd September
Author: Robert Eviston*/

#include <stdio.h>
#include <conio.h>

main()

{
    int j;
    float i;
    
    j = 4000;
    i = 4;

    printf("The value of i is %d\n", i);
    printf("Size of an integer is %d", sizeof(int));
    
    getchar();
    
}
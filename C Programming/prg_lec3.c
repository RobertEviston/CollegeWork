/*
Name: Robert Eviston
Date: 18/02/2014

External variables
<<------------------------------------------------->>

An external variable acts like a global variable
*/

#include <stdio.h>
#include "my_file.h"

// Declare prototype
void fxn(void);

main()
{
    extern int num1;
    
    num1 = 10;
    // Call function
    fxn();
}

// Implement function fxn()
void fxn()
{
    extern int var1;
    
    printf("%d", var1);
}
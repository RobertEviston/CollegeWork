/* Pass by Reference
(passing the address)
Is used to control how variable values are changed in what functions
Name: Robert Eviston    
Date: 06/02/2014
*/
#include <stdio.h>
// Declare prototype
void fxn(int*); // Address is passed over (*)
main()
{
    int num1 = 1;
    
    printf("num1 is %d", num1);
    // Call function fxn()
    fxn(&num1);
    
    printf("\nnum1 is %d", num1);
    getchar();
} // End main()

/* Implement function fxn() */
void fxn(int *no1)
{
    printf("\nno1 is %d", *no1);
    
    (*no1)++; // Gets actual data from address and increments so num1 is now 2
} // End fxn()

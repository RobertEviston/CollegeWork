/* Pass by value
(passing a copy of the data)
Name: Robert Eviston    
Date: 06/02/2014
*/
#include <stdio.h>
// Declare prototype
void fxn(int);
main()
{
    int num1 = 1;
    
    printf("num1 is %d", num1);
    // Call function fxn()
    fxn(num1);
    
    printf("\nnum1 is %d", num1);
    getchar();
} // End main()

/* Implement function fxn() */
void fxn(int no1)
{
    printf("\nno1 is %d", no1);
    
    no1++;
} // End fxn()

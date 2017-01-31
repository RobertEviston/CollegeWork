/* Program to display variable memory address
Introduction to Pointers
*/
#include <stdio.h>
main()
{
    int var1;
    char var2;
    int *ptr1; //  The *tells the compiler its a pointer variable and the * is not used again in code only at the start.
    char *ptr2; 
    
    var1 = 1;
    var2 = 'A';
    ptr1 = &var1; // ptr1 points to var1
    ptr2 = &var2; // ptr2 points to var2
    
    printf("var1 contains %d and stored at %p\n", var1, &var1);
    printf("var2 contains %c and stored at %p\n", var2, &var2); // If you forget & in delimiter it just copies its contents and displays that like an address.
    printf("ptr1 contains %p\n", ptr1);
    printf("ptr2 contains %p\n", ptr2);
    
    getchar();
    
} // end main

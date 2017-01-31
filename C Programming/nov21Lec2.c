#include <stdio.h>
main()
{
    int a[5] = {1, 2, 3, 4, 5};
    
    // In C, the name of an array is equivalent to the address of the 1st element in that array
        
    printf("%p\n", &a[0]);
    printf("%p\n", a+1);
    printf("%p\n", a+2);
    printf("%p", a+3);

        
    getchar();
        
} // End main
    
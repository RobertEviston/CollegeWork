#include <stdio.h>
main()
{
    int var1;
    char var2;
    int *ptr1;
    char *ptr2;
    
    int a = 1;
    int b = 2;
    int c;
    int *pa;
    int *pb;
    
    pa = &a;
    pb = &b;
    
    c = *pa / *pb; // used to access the contents of a variable whose address is stored in a pointer.
    
    var1 = 1;
    var2 = 'A';
    ptr1 = &var1;
    ptr2 = &var2;
    
    printf("ptr1 contains %p\n", ptr1);
    printf("ptr2 contains %p\n", ptr2);
    
    // Indirection Operator
    // The indirection operator used to access the contents of a variable whose address is stored in a pointer.
    
    printf("ptr1 contains %p, *ptr1 contains %d\n", ptr1, *ptr1);
    printf("ptr2 contains %p, *ptr2 contains %c\n", ptr2, *ptr2);
    
    getchar();
    
} // End main
    
    
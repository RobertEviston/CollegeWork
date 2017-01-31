#include <stdio.h>
#include <stdlib.h>
main()
{
    int i;
    char str[3];
    str[0] = 'h';
    str[1] = 'i';
    str[2] = '\0';
    printf("%s\n", str); // prints hi to stdout
    
    // Comparison of strings
    //i = strcmp(str, "abc"); //1 higher, -1 lower, 
    getchar();
}
/* 
Name: Robert Eviston
Date: 06/03/2014
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

main()
{
    printf("%6s\n", "abed"); // prints 2 spaces then the string as 2 extra spaces were declared
    printf("%5s\n", "abedef"); // still prints entire string
    printf("%-5s\n", "abc"); // prints abc
    printf("%5.2s\n", "abede"); // prints white space then ab
    printf("%-5.2s\n", "abede"); // prints ab

    
    getchar();
}// end main()
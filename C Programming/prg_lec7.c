// Converting numeric strings to numbers
// "123" 123

#include <stdio.h>
#include <stdlib.h> // required for this process
#include <string.h>

main()
{
    char str[] = "123";
    int int_num;
    long long_num;
    double double_num;
    
    int_num = atoi(str); // atoi = ASCII to int
    long_num = atol(str); // atol = ASCII to long
    double_num = atof(str); // atof = ASCII to float
    
    printf("%d\n%f\n%f", int_num, long_num, double_num);
    
    getchar();
    
    
} // end main()
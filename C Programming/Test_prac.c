#include <stdio.h>
main ()
{
    int num1, num2, num3;
    char ch2;
    
    num1 = 5;
    num3 = 4;
    
    printf("Please enter 1 number and 1 character: \n");
    scanf("%d", &num2);
    flushall();
    scanf("%c", &ch2);
    flushall();
    
    printf("\nYou entered %d and %c\n", num2, ch2);
    printf("The other numbers are %d, %d", num1, num3);
    
    getchar();
}
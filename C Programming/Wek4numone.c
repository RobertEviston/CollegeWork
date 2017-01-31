/* This program is designed to read in 3 numbers 
the user enters and display them on 3 seperate lines.
Author: Robert Eviston
Date: 7th October 2013
*/
#include <stdio.h>
main()
{
    int num1;
    int num2;
    int num3;
    
    printf("Please enter three numbers: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    printf("Your numbers are:\n%d\n%d\n%d", num1, num2, num3);
    
    flushall();
    getchar();
}

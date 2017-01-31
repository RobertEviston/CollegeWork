/* This program reads in 3 numbers and returns the averavge to the user
Name: Robert Eviston
Date: 13/02/2014
*/

#include <stdio.h>

float average_find (float, float, float);
main()
{
    float num1, num2, num3;
    float average;
    printf("Please enter 3 numbers and program will find average\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    flushall();
    
    average_find(num1, num2, num3);
    
    getchar();
} // end main

float average_find(float number1, float number2, float number3)
{
    float average1;
    average1 = ((number1 + number2 + number3) /3);
    
    printf("%.2f", average1);
} // end checker
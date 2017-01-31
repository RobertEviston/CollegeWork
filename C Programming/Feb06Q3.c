/* This program uses 3 function parameters
and displays the highest and lowest value of the 3.
Name: Robert Eviston
Date: 06/02/2014
*/
#include <stdio.h>
#include <stdlib.h>
int parameters(int, int, int);
main()
{
    int num1, num2, num3; 

    printf("Please enter 3 values.\nThis program will tell you the highest and lowest of values.\n");
    scanf("%d", num1); // Reading in the 3 numbers
    scanf("%d", num2);
    scanf("%d", num3);
    flushall();
    
    parameters(num1, num2, num3);
    getchar();
} // End main()

void parameters(int number1, int number2, int number3) //We declare the name of ints and copy contents
{
    int x; // int for highest value
    int y; // int for lowest value
    int z;
    
    if (number1 < number2)
    {
        x = number1;
    }
    else 
    {
        x = number2;
    }
        
    if (number2 < number3)
    {
        y = number2;
    }
    else 
    {
        number3 = y;
    }
    
    if (x < y)
    {
        z = x;
    }
    else 
    {
        z = y;
    }
        
    printf("The highest value is %d", z);
    printf("%d, %d, %d", number1, number2, number3);
} //End parameters

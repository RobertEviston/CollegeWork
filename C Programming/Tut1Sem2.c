/*  Tutorial week 1 example 
Name: Robert Eviston
Date: 30/01/2014
*/
#include <stdio.h>
void sum(int, int);
void product(int, int);
main()
{
	int num1 = 0;
	int num2 = 0;

	printf("Enter two numbers\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
    flushall();

	// Call function sum
	sum(num1, num2);
   // product(num1, num2);
    getchar();
} // end main()

// Implement function sum()
void sum(int number1, int number2)
{
	int total = 0;
	total = number1 + number2;

	printf("Sum is %d\n", total);
    
    number1++;
    number2++;
    product(number1, number2);
} // end sum ()

void product(int var1, int var2)
{
    int mult = 0;
    mult = var1 * var2;
    printf("Product is %d, when 1 added to both", mult);
} // end product ()

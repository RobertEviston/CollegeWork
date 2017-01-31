/* Author : Gytis
    Description : Calculating numbers into their binary form
    Date : 11/02/2014
    */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAXBITS  32

void main()
{
    printf("  ");
	int bits[MAXBITS];       // declare array bits, to hold the bits.
	int index;
	int number,num;

    for(num = 100; num <= 128; num++)
    {
    number = num;
	            // choose a number to test the code
    
	printf(" Binary of Decimal %5d = ", number);

   index = 0;
   //
   //   Complete the code for the while loop
   //
    
        while (number>0)
        {
            bits[index] = number % 2;// find remainder
            number = number / 2;// move to next array element in bits[]
            index = index++;// divide the number by 2
        }//end while loop
   
	// Print out the bits in reverse order, from last to first.
	for (int i = index - 1; i >= 0; i--)
	{
   	printf(" %1d", bits[i]);
	}
	printf("\n  ");
     }//end for loop

   getch();
}


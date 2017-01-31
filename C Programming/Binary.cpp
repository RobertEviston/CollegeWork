#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAXBITS  32

void main()
{
	int bits[MAXBITS];       // declare array bits, to hold the bits.
	int index;
	int number;
    int num;

	number = 16;              // choose a number to test the code
	printf(" Binary of Decimal %5d = ", number);

    index = 0;
    
    while (number > 0) 
    {
        bits[index] = number%2;
        number = number / 2;
        index = index + 1;
    }
    
	for (int i = index - 1; i >= 0; i--)
	{
   	printf(" %1d", bits[i]);
	}
	printf("\n  ");
    
    for (num=100;num<=128;num++)
    {
        number = num;
         index = 0;
    
        while (number > 0) 
        {
            bits[index] = number%2;
            number = number / 2;
            index = index + 1;
        }
    
        for (int i = index - 1; i >= 0; i--)
        {
        printf(" %1d", bits[i]);
        }
        printf("\n  ");
    }
    
   getch();
}


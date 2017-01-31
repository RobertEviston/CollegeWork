/* This program is designed to convert an integer number
into its binary equivalent and display it in reverse order
Name: Robert Eviston
Date: 11/02/2014
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXBITS 32

int bits[MAXBITS];
int index = 0;
int number = 'N'; // Choose N = 16 say

while (number > 0)
{
    bits[index] = number mod 2 // Remainder when divided by 2
    number = number / 2 // Divide number by 2
    index = index + 1
}
    
// print bits[i] in reverse order, from last (i = index - 1) to first (i = 0)
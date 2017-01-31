/* This program uses 2 function parameters 
Name: Robert Eviston
Date: 06/02/2014
*/
#include <stdio.h>
#define NUM 5
void parameters(int, char);       
main()
{
	int num = NUM;
	char letter = 'A';

	parameters(num, letter);
} // End main()

void parameters(int five_letters, char letter_a) //We declare the name of ints and chars in function and call it
{
	int i;
	for(i=0;i<five_letters;i++)
	{
		printf("%c", letter_a);
	} // End for()
    getchar();
} // End stars()

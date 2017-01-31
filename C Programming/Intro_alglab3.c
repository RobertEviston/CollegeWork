/* This program reads in an array and scans array for a number, if found will tell the position in array
Name: Robert Eviston
Date: 18/02/2014
*/

#include <stdio.h>
#include <conio.h>
#define NUM 20

//search for key in array array[] of size n

int sequentialSearch (int[NUM], int, int);

main()  // main program to test the algorithm
{
	//declare and initialise a simple array of size 10
   
	int myarray[NUM] = {2, 4, 7, 8, 31, 22, 17, 6, 5, 11, 3, 12, 99, 24, 16, 1, 23, 42, 63, 89 };
	int i, position, key;

	printf("Array is ");
    
	for(i=0;i<NUM;++i)
    {
		printf("%2d ", myarray[i]);
    }

	printf("\nInput value to search for: ");
	scanf("%d", &key);
    flushall();

	//call the sequential search algorithm

	position = sequentialSearch(myarray, key, NUM);

	if( position == -1)
    {
		printf("\nValue not found\n\n");
    }
	else
    {
		printf("\nValue found at array position: %d\n\n", position);
    }

   getchar();
} // end main()


int sequentialSearch(int array[NUM], int key, int n)
{
	int position = -1;      // indicates key not found (default)
    int i = 0;
    
    while(i<=(n - 1) && position == -1)
    {
        if(key == array[i] )
        {
            position = i;
            return (position);
            
        } // End if
        i = i++;

    } // End while
return (position);
}// end function()

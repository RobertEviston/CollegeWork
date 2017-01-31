#include <stdio.h>
#include <conio.h>

//search for key in array array[] of size n

int sequentialSearch( int array[], int key, int n)
{
	int position = -1;                  // indicates key not found (default)

	for( int i = 0; i < n; i++)         // possibly search whole array for key
	{
		if( key == array[i])
      {
      	position = i;
			return position;	            // return position of key in array[]
      }
	}
	return position;                    // indicates key is not found
}                                      // after 'for' loop is finished

void main()                            // main program to test the algorithm
{
	//declare and initialise a simple array of size 10
   
	int myarray[10] = {2, 4, 7, 8, 31, 22, 17, 6, 5, 11 };
	int i, position, key;

	printf("\nArray is ");
	for(i = 0; i < 10; ++i)
		printf("%2d ", myarray[i]);

	printf("\nInput value to search for: ");
	scanf("%d", &key);

	//call the sequential search algorithm

	position = sequentialSearch(myarray, key, 10);

	if( position == -1)
		printf("\nValue not found\n\n");
	else
		printf("\nValue found at array position: %d\n\n", position);

   getch();
}






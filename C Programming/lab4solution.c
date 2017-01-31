#include <stdio.h>
#include <conio.h>
#define SIZE 100

//Search for key in array[] of size n

int BinarySearch(int array[], int min_index, int max_index, int key)
{
	int position = -1;                  // indicates key not found (default)
	int mid;

	while (min_index <= max_index)
	{
		mid = (min_index + max_index)/2; // find the middle index in the array.
		if( min_index > max_index)             // COMPARE KEY with A[k] here
		{
			position = mid;
			return position;	            // return position of key in array[]
		}
		else if (key < array[mid])             // search first half
			max_index   ;                 // COMPUTE max_index HERE, first half
		else                                   // search second half
			min_index   ;                 // COMPUTE min_index HERE, second half
	}
	return position;                    // indicates key is not found
}                                      // after 'while' loop is finished


main()                             // main program to test the algorithm
{
	//declare and initialise a simple array of size 10
   
	int myarray[SIZE];
	int position, key;
	int low, high;

		for(int i = 0; i < SIZE; i++)
    {
        printf("\nArray is ");
        scanf("%d",&myarray[i]);
		printf("%d ", myarray[i]);
    }

	printf("\nInput value to search for: ");
	scanf("%d", &key);
	low = 0;               // Initial min index
	high = 9;              // Initial max index

	//int BinarySearch(int array[], int min_index, int max_index, int key)                // Call the Binary Search algorithm

	position = BinarySearch(myarray, low, high, key);

	if( position == -1)
		printf("\nValue %d not found\n\n", myarray[0]);      // key not found
	else
		printf("\nValue %d found at array position: %d\n\n", myarray[position],position);

	getch();
}






#include <stdio.h>

//Search for key in array[] of size n

int BinarySearch(int array[], int min_index, int max_index, int key)
{
	int position = -1;                  // indicates key not found (default)
	int mid;

	while (min_index < (max_index - 1))
	{
		mid = (min_index + max_index)/2;        // find the middle index in the array.
        
		if(array[mid] == key)             // COMPARE KEY with A[k] here
		{
			position = mid;
			return position;	            // return position of key in array[]
		}
		else if(key < array[mid])          // search first half
        {
			max_index = mid;                  // COMPUTE max_index HERE, first half
        }
		else if(key < array[mid])                                   // search second half
        {
			min_index = mid;                 // COMPUTE min_index HERE, second half
        }
	}
	return position;                    // indicates key is not found
}                                      // after 'while' loop is finished


void main()                             // main program to test the algorithm
{
	//declare and initialise a simple array of size 10
   
	int myarray[10] = {2, 4, 7, 8, 11, 14, 17, 19, 21, 24 };
    //PART 2
    /*for(i=0; i >100; i++)
        {
            int myarray[i] = 2 * i + 1;
        }    */

	int position, key;
	int low, high;
    int i;

	printf("\nArray is ");
    
	for(i = 0; i < 10; i++)
    {
		printf("%d ", myarray[i]);
    }

	printf("\nInput value to search for: ");
	scanf("%d", &key);
    flushall();
    
	low = 0;               // Initial min index
	high = 9;              // Initial max index

	// Call the Binary Search algorithm

	position = BinarySearch(myarray, low, high, key);

	if(position == -1)
    {
		printf("\nValue %d not found\n\n", myarray[0]);      // key not found
    }
	else
    {
		printf("\nValue %d found at array position: %d\n\n", myarray[position],position);
    }

	getchar();
}






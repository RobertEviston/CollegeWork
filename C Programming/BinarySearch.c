#include <stdio.h>
#include <stdlib.h>

//Search for key in array[] of size n
int BinarySearch(int array[], int min_index, int max_index, int key);

void main()                             // main program to test the algorithm
{
	//declare and initialise a simple array of size 10
   
	int myarray[10] = {2, 4, 7, 8, 11, 14, 17, 19, 21, 24};
	int position, key;
	int low, high;
    int i;

	printf("\nArray is ");
    
	for(i=0;i<10;i++)
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
		printf("\nValue %d not found\n\n", key);      // key not found
    }
	else
    {
		printf("\nValue %d found at array position: %d\n\n", myarray[position],position);
    }

    getchar();
} // end main()

int BinarySearch(int array[], int min_index, int max_index, int key)
{
	int position = -1;                  // indicates key not found (default)
	int mid;
    
    mid = (min_index + max_index)/2; // find the middle index in the array.

	while (min_index <= max_index)
	{
        
		if(key == array[mid])             // COMPARE KEY with A[k] here
		{
			position = mid;   
            return position;// return position of key in array[]
		}
		else if(key < array[mid])  
        {            // search first half
			position = mid - 1; 
            return position;
        }            
		else if(key > array[mid])
        {            // search second half
			position = mid + 1;   
            return position;
        }        
        else
        {
            min_index;
        }
	} // end while()
    
	return position;     // indicates key is not found
    
} // end BinarySearch()                               // after 'while' loop is finished

/*malloc ()
calloc ()
calloc () also dynamically allocates a block of memory. However, unliike malloc (),
it initialises the conents of the block memory to zero.
Program that uses calloc() */

#include <stdio.h>
#include <stdlib.h>
main()
{
    float *float_array;
    int no_els, i;
    
    printf("How many numbers do you wish to allocate memory?\n");
    scanf("%d", &no_els); 
    
    // pointer = calloc (number,  size);
    // Pointer contains address to start of block
    // Number of elements in the block
    // Size of each number in bytes
    
    /*Allocate no_els each of size sizeof(float) and
        initialise all elements to 0 */
    float_array = (float*) calloc(no_els, sizeof(float));
    // Note difference between calloc and malloc
    
    // check if memory allocated successfully 
    if (float_array == NULL)
    {
        printf("Cannot allocate");
    } // end if ()
    else
    {
        // Display contens of the memory just allocated
        for (i=0;i<no_els;i++)
        {
            printf("Element %d is %.1f\n", i, *(float_array + i));
            // The * is used to get into contents of address
        }
        
        free (float_array);
        // Free memory when finished
        
        flushall();
        getchar();
    } // end else ()
} // end main ( )
    
    
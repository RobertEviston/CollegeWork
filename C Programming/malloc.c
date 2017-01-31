/* This program 

*/

#include <stdio.h>
#include <stdlib.h>
main()
{
    int *ptr;
    int no_els, no_bytes, i;
    
    no_els = 0;
    
    printf("Enter how many numbers you need memory for\n");
    scanf("%d", &no_els);
    
    no_bytes = no_els*sizeof(int);
    
    ptr = (int*) malloc(no_bytes);
    
    if (ptr == NULL)
    {
        printf("Cannot allocate memory\n");
    }
    else
    {
        // Enter number into block of memory
        for(i=0; i<no_els; i++)
        {
            printf("Enter element %d\n", i);
            scanf("%d", &*(ptr+i));
        }
        // Display numbers in block of memory
        
        for(i=0; i<no_els; i++)
        {
            printf("Element %d is %d\n", i, *(ptr+i));
        }
        getchar();
        free(ptr); // Release the memory now that we're finished
    }// end else
}// end main
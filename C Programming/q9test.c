/* program to demonstrate  using malloc(). 
*/
#include <stdio.h>
#include <stdlib.h> 
 main()
 {
    int *int_array;
    int no_els, no_bytes, i;
    int total_array;
     
    total_array = 0;
    
    printf("Enter the number of elements you wish to allocate memory to\n");
    scanf("%d", &no_els);
    
    no_bytes = no_els * sizeof(int);
    
    int_array = (int *) malloc(no_bytes);
    if (int_array == NULL)
    {
        printf("Cannot allocate memory");
    }
    else 
    {
        for(i=0;i<no_els;i++)
        {
            printf("Enter element %d\n", i);
            scanf("%d", int_array + i);
        }
        for(i=0;i<no_els;i++)
        {
            printf("Element %d is %d\n", i, *(int_array + i));
        }
        for(i=0;i<no_els;i++)
        {
            total_array = total_array + *(int_array + i);
        }
        printf("%d", total_array);
        
        free(int_array);
    }
    flushall();
    getchar();
}
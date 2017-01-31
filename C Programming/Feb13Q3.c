/* This program uses 3 function parameters
and displays the highest and lowest value of the 3.
Name: Robert Eviston
Date: 20/02/2014
*/
#include <stdio.h>
#define SIZE 5

int sum_array(int[], int*);

main()
{
    int values[SIZE];
    int local_high;
    int i;
    
    printf("Please enter %d values.\nThis program will tell you the highest and lowest of values.\n", SIZE);
    
     for (i=0;i<SIZE;i++)
    {
        scanf("%d", &values[i]);
        flushall();
    }
    
    sum_array(values, &local_high);
    
    printf("\nThe largest number is: %d", local_high);
    
    getchar();
} // End main()

int sum_array(int my_array[], int *highest) //We declare the name of ints and copy contents
{
    int j;
    
    for(j=0;j<SIZE;j++)
    {
        if (my_array[j] > *highest)
        {
            *highest = my_array[j];
        } // end if
    } // end for()
    
    return(*highest);
} //End sum_array
/* This program uses 3 function parameters
and displays the highest and lowest value of the 3.
Name: Robert Eviston
Date: 06/02/2014
*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int sum_array(int[]);
main()
{
    int values[SIZE];
    int local_high;
    int local_small;
    int i;
    
    printf("Please enter 3 values.\nThis program will tell you the highest and lowest of values.\n");
    
     for (i=0;i<SIZE;i++)
    {
        scanf("%d", &values[i]);
        flushall();
    }
    
    local_high = sum_array(values);
    local_small = sum_array(values);
    
    printf("%d = highest, %d = smallest", local_high, local_small);
    
    getchar();
} // End main()

int sum_array(int my_array[]) //We declare the name of ints and copy contents
{
    int j;
    int highest;
    int smallest;
    
    for(j=0;j<SIZE;j++)
    {
        if (my_array[j] > highest)
        {
            highest = my_array[j];
        } // end if
        
        if (my_array[j] < smallest)
        {
            smallest = my_array[j];
        } // end if 
    }
    
    return(highest);
    return(smallest);
} //End sum_array

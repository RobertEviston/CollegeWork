/* Passing a 1-d array to a function
Name: Robert Eviston
Date: 11/02/2014
*/

#include <stdio.h>
#define SIZE 10

// Declare prototype
int sum_array(int[]);
main()
{
    int values[SIZE];
    int local_sum = 0;
    int i;
    
    printf("Enter the values\n");
    
    for (i=0;i<SIZE;i++)
    {
        scanf("%d", &values[i]);
        flushall();
    }
    
    // Call function sum_array()
    local_sum = sum_array(values);
    printf("\nSum of array is %d", local_sum);
    getchar();
} // end main()

// Implement function sum_array()

int sum_array(int my_array[])
{
    int total = 0;
    int i;
    
    for (i=0;i<SIZE;i++)
    {
        total = total + my_array[i];
    }
    return(total);
} // end sum_array
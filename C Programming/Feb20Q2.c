/* This program uses 1 function to calculate the average of
an array of 5 numbers and displays the highest value of the 5.
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

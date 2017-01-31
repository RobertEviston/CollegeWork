/* This program uses 5 function parameters
and displays the highest and lowest value of the 5.
Name: Robert Eviston
Date: 20/02/2014
*/
#include <stdio.h>
#define SIZE 5

int sum_array(int[], int*);

main()
{
    int values[SIZE];
    int local_average;
    int i;
    
    printf("Please enter %d values.\nThis program will tell you the average of these 5 vaules.\n", SIZE);
    
     for (i=0;i<SIZE;i++)
    {
        scanf("%d", &values[i]);
        flushall();
    }
    
    sum_array(values, &local_average);
    
    printf("\nThe average of these numbers is: %d", local_average);
    
    getchar();
} // End main()

int sum_array(int my_array[], int *average) //We declare the name of ints and copy contents
{
    int j;
    int total = 0;
    
    for(j=0;j<SIZE;j++)
    {
        total = total + my_array[j];
    } // end for()
    
    *average = (total / SIZE);
    
    return(*average);
} //End sum_array

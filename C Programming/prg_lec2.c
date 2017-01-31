/* Program that passes a 2-D array to a function
Name: Robert Eviston
Date: 13/02/2014
*/

#include <stdio.h>

// Declare prototype
int sum_array(int[][2], int);

main()
{
    int values[5][2] =  {   { 2, 4},
                            {16, 27},
                            {14, 11},
                            {34, 19},
                            {6, 9}
                        };
    int sum = 0;
    
    sum = sum_array(values, 5);
                        
    printf("The sum of the array is %d", sum);
    
    getchar();
} // end main()

// Implement sum_array() 
int sum_array(int my_array[][2], int no_of_rows)
{
    int i, j = 0;
    int total = 0;
    
    for(i=0;i<no_of_rows;i++)
    {
        for(j=0;j<2;j++)
        {
            total = total + my_array[i][j];
        } // end inner for()
    } // end outter for()
    
    return(total);
} // end sum_array()
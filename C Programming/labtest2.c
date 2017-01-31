/* This program is designed to initialise a 2D array with 5 rows and 5 columns and 
Author: Robert Eviston
Date: 2nd December 2013
*/
#include <stdio.h>
#define ROW 5
#define COL 5
main()
{
    int matrix[ROW][COL];
    int i, j;
    int sum = 0;
    
    printf("The elements in the array are:\n");
                          
    for (i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            matrix[i][j] = 5; // This initialises all the elements in the array to 5
        } // end inner for ()
    } // end outter for ()
    
    for (i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            matrix[i][0] = 2; // sets 1st in each row to 2
            matrix[i][4] = 2; // sets last in each row to 2
            matrix[i][2] = 1; // middle row values now = 1
            matrix[j][2] = 1; // middle column values now = 1
            matrix[1][1] = 0;
            matrix[3][3] = 0;
            matrix[3][1] = 0;
            matrix[3][3] = 0;
        } // end inner for ()
    } // end outter for ()
    
    for (i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ", matrix[i][j]); // displays elements in array in order
        } // end inner for ()
    } // end outter for ()
    
    printf("\nThe most common number is 1");
    
    getchar();
} // end main
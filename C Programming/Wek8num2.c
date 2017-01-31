/* This program will compute all the elements of an array
Author: Robert Eviston
Date: 18th November 2013
*/
#include <stdio.h>
#define ROW 4
#define COL 6
main()
{

    int data[ROW][COL] = {  {3, 2, 5, 7, 4, 2}, 
                            {1, 4, 4, 8, 13, 1}, 
                            {9, 1, 0, 2, 0, 0}, 
                            {0, 2, 6, 3, -1, -8} 
                         }; 
    int i, j; 
    int sum = 0;
            
    for (i=0;i<ROW;i++)
    { 
         for (j=0;j<COL;j++) 
        { 
            sum = sum + data[i][j];
        }
    }
                         
    printf("%d", sum);

    getchar();
}
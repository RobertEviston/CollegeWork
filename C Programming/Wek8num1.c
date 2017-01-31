/* This program initializes 3 (3x4) 2D arrays. It then multiplies the elements of the
1st and 2nd array and stores the answer of each in the elements of the 3rd array.
Author: Robert Eviston
Date: 18th November 2013
*/

#include <stdio.h>
#define ROW 3
#define COL 4

main()
{
    int matrix1[ROW][COL];
    int matrix2[ROW][COL];
    int matrix3[ROW][COL];
    int i;
    int j;
    
    printf("Please enter 24 values into the following array\n\n");
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            scanf("%d", &matrix1[i][j]);
        }// End second for ()
    }// End outter for ()
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            scanf("%d", &matrix2[i][j]);
            flushall();
        }// End second for ()
    }// End outter for ()
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            matrix3[i][j] = (matrix1[i][j] * matrix2[i][j]);
        }// End second for ()
    }// End outter for ()
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            printf("%d, ", matrix3[i][j]);
        }// End second for ()
    }// End outter for ()
    
    getchar();
}
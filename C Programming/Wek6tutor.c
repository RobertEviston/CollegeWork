#include <stdio.h>
#define ROW 2
#define COL 2
main ()
{
    int i;
    int j;
    int largest;
    int smallest;
    int average;
    int matrix[ROW][COL];
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            scanf("%d", &matrix[i][j]);
        } // End inner scanf for ()
        flushall();
    } // End outter scanf for ()
    
        for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            printf("%d", matrix[i][j]);
        } // End inner printf for ()
    } // End outter printf for ()
    
    getchar();
} // End main
    
    
    
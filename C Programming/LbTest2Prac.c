#include <stdio.h>
#define ROW 4
#define COL 4
main()
{
    int matrix[ROW][COL];
    int i, j;
    int largest, smallest, average;
    int size;
    
    size = 0;
    
    printf("Please enter 16 numbers!\n");
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            scanf("%d", &matrix[i][j]);
            size = size + 1;
            flushall();
        } // end inner scanf for ()
    } // end outter scanf for ()
    
    for (i=0;i<ROW;i++)
    { 
         for (j=0;j<COL;j++) 
        { 
            if (largest < matrix[i][j])
            {
                largest = matrix[i][j];
            }
        }
    }
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            if (smallest > matrix[i][j])
            {
                smallest = matrix[i][j];
            } // end if
        } // end inner for ()
    } // end outter for ()
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            average = (matrix[i][j]/size);
        }
    }
    
    printf("%d is the largest", largest);
    printf("%d the smallest\n", smallest);
    printf("%d the average\n", average);
    printf("%d  ", matrix[i][j]);
    getchar();
    
}
    
        
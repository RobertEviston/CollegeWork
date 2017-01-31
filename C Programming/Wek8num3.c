/* This program uses a 3x2 array that displays:
 the largest figure in the array,
 row 0, row 1, and row 2 'seperately'
 col 0 and col 1 'seperately'
 Author: Robert Eviston
 Date: 18th November 2013
 */
 #include <stdio.h>
 #define ROW 3
 #define COL 2
 main()
 {
    int matrix[ROW][COL];
    int i, j;
    int largest;
     
    printf("\t\tPlease enter 6 numbers and this program \n\t\twill tell you the biggest of these numbers:\n");
     
    for (i=0;i<ROW;i++)
    { 
         for (j=0;j<COL;j++) 
        { 
            scanf("%d", &matrix[i][j]);
            flushall();
        }
    }
    
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
    
    printf("The largest number in the array is %d", largest);
    
    getchar();
}
    
/* This is a program with an array that you:
(i) Enter values into array
(ii) Display values of the array
(iii) Find smallest and largest and display them
(iv) Calculate the average of values and display
Author: Robert Eviston
Date: 11th November 2013
*/
#include <stdio.h>
#define ROW 3
#define COL 2
main()
{
    int i;
    int j;
    int smallest;
    int largest;
    float average;
    int total;
    int numbers[ROW][COL];
    
    total = 0;
    average = 0;
    
    printf("\t\t\tPlease enter 6 values:\n");
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            scanf("%d", &numbers[i][j]);
            total = total + numbers[i][j];
        } // End inner scanf for ()
        flushall();
    } // End outter scanf for ()
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            if (largest < numbers[i][j])
            {
                largest = numbers[i][j];
            } // end inner if
        } // end inner for
    }
    
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            if (smallest > numbers[i][j])
            {
                smallest = numbers[i][j];
            } // end inner if
        } // end inner for
    }
        
    for (i=0;i<ROW;i++)
    {
        for (j=0;j<COL;j++)
        {
            printf("%d, ", numbers[i][j]);
        } // End inner printf for ()
    } // End outter printf for ()
    
    average = total / 6;
    
    printf("\nLargest number is %d\nThe smallest number is %d\n", largest,smallest);
    printf("The average of the numbers is %.2f\n", average);
    printf("Total = %d", total);
   
    getchar();
    
} // End main
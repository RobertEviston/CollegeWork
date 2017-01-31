/* Swapping numbers using Pass by Reference 
Name: Robert Eviston
Date: 06/02/2014
*/
#include <stdio.h>
// Declare prototype
void swap(float*, float*);
main()
{
    float num1, num2;
    
    printf("Enter two numbers\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    flushall();
    /* We want smaller number in num1 
            Use function to swap if not
    */
    if (num1 > num2)
    {
        // Call function swap()
        swap(&num1, &num2);
    }
    
    printf("\nnum1 is %f and num2 is %f", num1, num2);
    getchar();
} // end main()

/* Implement function swap() */
void swap(float *ptr1, float *ptr2)
{
    float temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
} // end swap()
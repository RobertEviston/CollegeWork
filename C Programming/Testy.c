/* This program is designed to use two seperate functions
to calculate area of a circle and square by pass by reference
Name: Robert Eviston
Date: 20/02/2014
*/

#include <stdio.h>
#define PI 3.14

float circle (float*); // Declare circle function
float square (float*); // Declare square function
main()
{
    float len_sqr = 0; // variable for size of lentgh of square
    float rad_cir = 0; // variable for size of radius of circle
    float ans_sqr; // area of square
    float ans_cir; // area of circle
    
    printf("Please enter the lentgh of the side of the square\n");
    scanf("%f", &len_sqr);
    printf("\nNow please enter the radius of the circle\n");
    scanf("%f", &rad_cir);
    flushall();
    
    square(&len_sqr);
    circle(&rad_cir);
    
    printf("\nThe area of the square is %.2f", ans_sqr); // displays answers
    printf("\nThe area of the circle is %.2f", ans_cir); // displays answers
    
    getchar();
    
} // end main()

float circle(float *sqr_len)
{
    float *sqr_ans;
    *sqr_ans = *sqr_len * 4;
    return(*sqr_ans);
    
} // end circle()

float square(float *cir_rad)
{
    float *cir_ans;
    *cir_ans = ((*cir_rad * *cir_rad) * PI);
    return(*cir_ans);
    
} // end square()
    

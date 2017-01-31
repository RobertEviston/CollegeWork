/* This program is designed to Compute and display the Volume
and Surface Area of a box with Height 10cm, Lentgh 11.5cm and Width 2.5cm.
Author: Robert Eviston
Date: 30th September 2013 */ 

#include <stdio.h>

main()
{
    int height;
    float length;
    float width;
    
    height = 10;
    length = 11.5;
    width = 2.5;
    
    printf("The volume of the box is %fcm\n\n", height * length * width);
    printf("The surface area of a box is %fcm", ((length * height) *2) + ((length * width) *2) + ((height * width) *2));
    
    getchar();
}
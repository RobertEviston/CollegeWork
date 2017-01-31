/* This program is designed so that the user enters their age and 
the program tells them how many times there heart has beated since birth.
Author: Robert Eviston
Date: 7th October 2013
*/
#include <stdio.h>
main()
{
    int age;
    long total_beats;
    
    printf("Please enter your age to find out how many beats your heart has made: ");
    scanf("%d", &age);
    flushall();
    
    total_beats = 39446175 * age;
    
    printf("Your heart has beated %d times in your %d years of life", total_beats, age);
    
    getchar();
    
}
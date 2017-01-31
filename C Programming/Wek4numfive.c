/* This program is designed to read characters
entered on keyboard and output onto the screen.
Author: Robert Eviston
Date: 7th October 2013
*/

#include <stdio.h>
main()
{
    char ch;
    char ch2;
    
    printf("Please enter two characters: ");
    ch = getchar();
    flushall();
    ch2 = getchar();
    
    printf("\nYou entered: ");
    flushall();
    putchar(ch);
    printf(" And ");
    putchar(ch2);
    getchar();
    
}
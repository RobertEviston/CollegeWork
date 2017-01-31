/* This program is designed to read in
2 characters and display them to the user.
Author: Robert Eviston
Date: 7th October 2013
*/

#include <stdio.h>
main()
{
    char ch1;
    char ch2;
    
    printf("Please enter two characters  ");
    scanf("%c", &ch1);
    flushall();
    scanf("%c", &ch2);
    printf("The characters you entered are: \n%c\n%c", ch1, ch2);
    
    flushall();
    getchar();
}

/* This program is designed so that the user enters a 
letter and the program tells them if its a vowel or not.
Author: Robert Eviston
Date: 14th October 2013
Lab 4 Quetion 1
*/
#include <stdio.h>
main()
{
    char vowel1;
    
    do
    {
    printf("Please Enter a vowel: \n");
    scanf("%c", &vowel1);
    flushall();

    switch( vowel1 )
    {
        case 'a':
        {
            printf("You entered a vowel\n");
            break;
        }
        case 'e':
        {
            printf("You entered a vowel\n");
            break;
        }
        case 'i':
        {
            printf("You entered a vowel\n");
            break;
        }
        case 'o':
        {
            printf("You entered a vowel\n");
            break;
        }
        case 'u':
        {
            printf("You entered a vowel\n");
            break;
        }
        default:
        {
            printf("You did not enter a vowel\n");
        }
    }// end switch
}
while ( vowel1 != ' ');
    getchar();
}// end main
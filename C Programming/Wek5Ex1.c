/* This program is designed display the user's marital status.
Author: Robert Eviston
Date: 21st October 2013
*/
#include <stdio.h>
main ()
{
    char ch;
    
    printf("Please enter your marital status\n");
    printf("Options are:\n(W)\n(M)\n(S)\n(E)\n(D)\n");
    scanf("%c", &ch);
    flushall();
    
    switch ( ch )
    {
        case 'S':
        {
            printf("Single");
            break;
        }
        case 'M':
        {
            printf("Married");
            break;
        }
        case 'W':
        {
            printf("Widowed");
            break;
        }
        case 'E':
        {
            printf("Seperated");
            break;
        }
        case 'D':
        {
            printf("Divorced");
            break;
        }
        default:
        {
            printf("Error: Invalid code");
        }
    }// End switch
    getchar();
}// End main
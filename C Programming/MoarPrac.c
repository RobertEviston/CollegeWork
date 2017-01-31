// This is my module timetable for semester 2 of Year 1.
// Author: Robert Eviston
// Date: 18/11/2013
#include <stdio.h>
main()

{
    char num1;
    
    printf("\t\tWelcome to your student timetable!\n");
    printf("\t\tPlease choose a day by typing the letter beside the day:\n");
    printf("(a)\tMonday\n");
    printf("(b)\tTuesday\n");
    printf("(c)\tWednesday\n");
    printf("(d)\tThursday\n");
    printf("(e)\tFriday\n");
    scanf("%c", &num1);
    flushall();
    
    switch( num1 )
    {
        case 'a':
        {
            printf("Mon");
            break;
        }
        case 'b':
        {
            printf("Tues");
            break;
        }
        case 'c':
        {
            printf("Wed");
            break;
        }
        case 'd':
        {
            printf("Thurs");
            break;
        }
        case 'e':
        {
            printf("Fri");
            break;
        }
        default:
        {
            printf("Not a choice, please try again..");
        }
    }
    getchar();
}
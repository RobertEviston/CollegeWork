/* This program prompts the user to enter a name, which is then checked 
against a string of names and if it matches one prints out thatthey are identical
Name: Robert Eviston
Date: 13/03/2014
*/

#include <stdio.h>
#include <string.h>
#define SIZE 12

main()
{
    int i;
    char str1[6];
    char *str2[SIZE] = {"john", "mark", "april",
                        "mary", "paul", "bill",
                        "chris", "cian", "sarah",
                        "jill", "ryan", "mike",
                       };
    
    printf("Please enter your name:\n");
    scanf("%s", str1);
    flushall();
                       
    int same = 1;
    int found = 1;
                       
    for(i=0;i<SIZE;i++)
    {
        same = strcmp(str1, *(str2 + i));
        *str2[i]++;
        if(same == 0)
        {
            printf("Hello there, %s!\n", str1);
            found = 0;
        }
         
    } //end for()
    
    if(found == 1)
    {
        printf("Name not found");
    }

    getchar();
} //end main()
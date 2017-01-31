/* This program is designed to input a country
and the program will return the captial of that country
Name: Robert Eviston
Date: 13/03/2014
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10

main()
{
    int i;
    int found = 1;
    int same = 1;
    char country[SIZE];
    char *countries[SIZE] = {   "Austrailia", "Belgium", "China",
                                "Denmark", "England", "France", 
                                "Greece", "Ireland", "Scotland", "Wales"
                            };
    char *capitals[SIZE] =  {   "Canberra", "Brussels", "Beijing",
                                "Copenhagan", "London", "Paris", 
                                "Athens", "Dublin", "Edinbrugh", "Cardiff"
                            };
                            
    printf("Please enter the name of a country:\n");
    gets(country);
    
    for(i=0;i<SIZE;i++)
    {
        same = strcmp(country, *(countries + i));
        if(same == 0)
        {
            printf("The Capital of %s is %s!", country, *(capitals + i));
            found = 0;
        }
        *countries[i]++;
        *capitals[i]++;
    }// end for()
    
    if(found == 1)
    {
        printf("Sorry, that Country is not in our registry");
    }// end if()

    getchar();
} //end main()
                            
                            

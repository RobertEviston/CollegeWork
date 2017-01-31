/* This program is an example of how structures work */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5

struct student_rec // Structure tag 
{
    char firstname[11];
    char surname[21];
    int ID;
    int results[SIZE]; // These are the structure members
}; // Everything together is the Structure template

/* ***** NB: Structure template should always go before
                    implementation of a function as function could 
                    call structure as a parameter!! ***** */

main()
{
    struct student_rec student; // Variable of structure
    register int i;
    
    printf("Please enter first name: ");
    scanf("%s", student.firstname);
    
    printf("\nNow please enter your surname: ");
    scanf("%s", student.surname);
    
    printf("\nEnter ID: ");
    scanf("%d", &student.ID);
    flushall();
    // Enter 5 results
    printf("\nEnter results: ");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &student.results[i]);
    }// end for()
    
    printf("\n\nThe students first name is: %s", student.firstname);
    printf("\n\nThe students surname is: %s", student.surname);
    printf("\n\nThe students ID number is: %d", student.ID);
    printf("\n\nThe students first name is: %d", student.results);
    
    getchar();
} // end main()
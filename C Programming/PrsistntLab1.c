/* This program is designed to ask the user to enter
the name of a file to open and if it cant it prints error
Name: Robert Eviston
Date: 25/02/2014
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200

int main()
{
    FILE *fp;
    char filename[SIZE];
    char str[SIZE];
    
    printf("Please enter the name of the file you wish to open: ");
    gets(filename);
    printf("Opening %s",filename);
	
    fp = fopen(filename, "a");
    
    if (fp == NULL)
    {
        printf("\nError opening the file");
        getchar();
        exit(1);
    } // end if
    
    printf("\nEnter new text, type exit() to save and quit\n");
    
	while (strcmp(gets(str), "exit()")!=0)
    {
        fprintf(fp,"\n%s",str);
    } // end while()

   return 0;
    
} // end main()
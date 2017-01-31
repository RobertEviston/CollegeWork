/* Program designed to enter a char and program searches for word in string and prints line and word in line
Name: Robert Eviston   
Date: 11/02/2014
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100

int main()
{
    FILE *fp;
    char filename[SIZE];
    char str[SIZE];
    
    printf("Please enter the name of the file you wish to open: ");
    gets(filename);
    printf("Opening %s",filename);
	
    fp = fopen(filename, "r");
    
    if (fp == NULL)
    {
        printf("\nError opening the file");
        exit(1);
    }
    getchar();
    return 0;
    
}
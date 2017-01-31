#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
//enter a file name from keyboard, try to open the file, count the number of lines

int main(int argc, char *argv[])
{
    FILE *fp;
    int count = 0;
    char filename[SIZE];
    //open a file, input from keyboard
    printf("Please enter the name of the file you wish to open: ");
 
    gets(filename);
    printf("Opening %s",filename);
	
    fp = fopen(filename, "r");
    
    if (fp == NULL)
    {
        printf("ERROR: File could not be found!");
        exit(1);
    }
    
    while (fgets(filename, SIZE, fp) != NULL)
    {
        count++;
    }
    
    printf("\nCount: %d", count);
    
    fclose(fp);
    return 0;
    }
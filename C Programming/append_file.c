#include <stdio.h>
#include <stdlib.h>
#define SIZE 200

//gets a name of a text file
//open in append mode
//user enters new lines of text, until he types "exit()"
//save the lines in the file
//show the content of the new updated file
//show the new line count

int main(int argc, char *argv[])
{
    FILE *fp;
    int count = 0;
    char filename[SIZE];
    char str[SIZE];
    
    printf("Please enter the name of the file you wish to open: ");
    gets(filename);
    printf("Opening %s",filename);
	
    fp = fopen(filename, "a");
    
    if (fp == NULL)
    {
        printf("ERROR");
        exit(1);
    }
    
    
   printf("\nEnter new text, type exit() to save and quit\n");
    
	while (strcmp(gets(str), "exit()")!=0)
	{
			fprintf(fp,"\n%s",str);
	}

	fclose(fp);
	fp = fopen(filename, "r");
	printf("\n== File Content ==\n");

    while (fgets(filename, SIZE, fp) != NULL)
    {
        printf("\n%s",filename);
		count++;
    }
	
   printf("\n================\n");
   printf("\nLine Count: %d", count);
   printf("\n================\n");
    
   fclose(fp);
   return 0;
    }
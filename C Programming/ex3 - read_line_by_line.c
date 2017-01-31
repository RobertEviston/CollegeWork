// EX.1 - READ A TEXT FILE LINE BY LINE
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fp;
    char line[50];     //string of size 50
    int num_lines = 0;  //we need a counter to count the lines
  
    fp = fopen("myfile.txt","r");  //open file
  
    if (fp ==NULL) 
    {
    //check for errors
    printf("Cannot open file.\n");
    exit(1);
    }
  
    while(fgets( line, 50, fp ) != NULL) 
    {  //see next slide
    printf("%s", line);
	num_lines++;
	}  //print on screen

	fclose(fp);    //close file
    printf("\nNumber : %d",num_lines);
	return 0;
}
    

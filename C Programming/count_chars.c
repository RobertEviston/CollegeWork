/* This program is designed to read a text file and count the number of digits and characters
Name: Robert Eviston
Date: 18/02/2014
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int dig = 0;   //count the number of digits
    int tot = 0;   //count the total nums and chars
    fp = fopen("english.txt","r");
    
    if (fp ==NULL) 
    {
    printf("Cannot open file.\n");
    exit(1); // error checking
    }
  
  while((ch = fgetc( fp )) != EOF) 
    {   
        if ((ch>='a' && ch<='z' ) || (ch>='A' && ch<='Z' )) //check if the characters is a capital or small letter
            {   
                tot++;  //increment the total number of letters
            }
        
        if (ch>=0 && ch<=50)
            {
                dig++; // increment the total number of digits and numbers
                tot++;
            }        
  }
  
  if ((double)dig/tot > .20) 
  {
      printf("Too many numbers!\n\n");
  }
  //show results
  printf ("Total: %d \n", tot);
  printf ("Digits: %d \n", dig);
  printf ("The percentage of Digits is: %f", (double)dig/tot);
  fclose(fp);
  getchar();
  return 0;
}

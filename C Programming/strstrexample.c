#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    char input[20];
    int i;
    
    printf("Enter a sentence\n");
    gets(input);
    
    if(strstr(input, "is") != NULL)
    {
        printf("The string \"is\" was found");
    }// end if()
    else
    {
        printf("Not found");
    }// end else()
    
    for(i=0;i<20;i++)
    {
        if(input[i-1] == ' ' && input[i] == 'i' && input[i+1] == 'S' && input[i+2] == ' ')
        {
            printf("Found \"is\" in the sentence ");
        }// end if()
        else 
        {
            printf("Did not find");
        }
    }// end for()
    
    getchar();
}// end main()
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    char input[20];
    
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
    
    getchar();
}// end main()
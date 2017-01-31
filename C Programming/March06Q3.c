/* 
Name: Robert Eviston
Date: 06/03/2014
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
    
char *text = "some text";

// what is the output from each of the following?

    printf("%s\n", text); 
    
    printf("%c\n", *text); 
    
    printf("%c\n", *"more text");
    
    printf("%c\n", *(text + 1)); 
    
    printf("%s\n", text+1); 
    
    printf("text\n"); 
    
    *(text + 4) = '\0' ; 
    
    printf("\n%s\n");
    
    printf("%c\n", "text"[2]);
    
    printf("%s\n", "text" + 2);
    
    getchar();
}
#include <stdio.h>
#include <string.h>
#define LENGTH 15

main()
{
    char name[LENGTH];
    int i;
    
    printf("Please enter your name\n");
    
    gets(name);
    
    for(i=0;i<LENGTH;i++)
    {
        printf("%c ", name[i]);
    } // end for()
    
    getchar();
} // end main()
    
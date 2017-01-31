/*
Name: Robert Eviston
Date: 06/03/2014
*/
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

main()
{
    char *p = "abed" ;
    while ( *p )
    {
        putchar( *p++ ) ;
    }
    
    
    /*
    char *text = "abed"; 
    char *p = text;
    p += strlen(p) - 1; 
    
    while(text <= p) 
    {
        puts(p--);
    } */
    
    getchar();
} // end main()
    

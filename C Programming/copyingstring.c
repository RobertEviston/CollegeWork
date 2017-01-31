/*
1. strlen();
2. Copying a string
    strcpy(string1, string2);
    --> strcpy(destination_string, source_string);
        : Source string MUST be NULL be terminated
        : C will assure that the destination string is large enough to fit the source string
        
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
main()
{
    
    int i = 0;
    char name1[] = "Feremir";
    char name2[10] = "Frodo";
    // Copy name into name2
    strcpy(name2, name1); // Copies contents of name1 to name2
    puts(name2); // Displays name2
    strcpy(name2, "Frodo");
    
    while (i != 5)
    {
        puts(name2);
        Sleep(800);
        puts(name1);
        Sleep(800);
        i++;
    }
    printf("\nGandalf!");
    getchar();
    
} // end main()
    
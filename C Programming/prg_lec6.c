#include <string.h>
#include <stdio.h>

//Finding lentgh of a string
// strlen();

main()
{
    char name1[] = "Sharon";
    char name2[10] = "Mark";
    char *name = "Patrick";
    int len = strlen(name1);
    
    printf("1: %d\n2: %d\n3: %d\n4: %d\n5: %d\n", strlen(name1), strlen(name2), strlen(name), strlen("Rob"), len);

   getchar(); 
} // End main()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
    char my_word[] = {'R', 'o', 'b', 'e', 'r', 't'};
    char *my_scnd_word = "Robert";
    
    printf("%s\n", my_word);
    printf("%s", my_scnd_word);
    
    getchar();
}// end main()
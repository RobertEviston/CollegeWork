/* A string is one or more characters encolsed in single-quotes.

NULL character, needs to be placed at
end of string to signify end of string.

e.g 'H' 'e' 'l' 'l' 'o' '\0' -----> The \0 is the NULL character.

*/

#include <stdio.h>
main()
{
    char name[21];
    
    printf("Enter a name\n"); // puts("Enter a name");
    scanf("%s", name);
    printf("\nYou entered  ");
    puts(name);
    
    getchar();
} // end main()

/* Only used with strings and char arrays
puts()
{
    puts("Hello");
    puts(name);
}
*/


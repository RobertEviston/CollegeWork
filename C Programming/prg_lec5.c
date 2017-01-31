/* A string is one or more characters encolsed in single-quotes.

NULL character, needs to be placed at
end of string to signify end of string.

e.g 'H' 'e' 'l' 'l' 'o' '\0' -----> The \0 is the NULL character.

*/

#include <stdio.h>
main()
{
    char name[21];
    char *p = "some text";
    
    while(*p != '\0')
    {
        printf("%c", *p);
        p++;
    } // end while 
    
    printf("\n\nEnter a name\n"); // puts("Enter a name");
    scanf("%s", name);
    flushall();
    printf("\nYou entered  ");
    puts(name);
    
    getchar();
} // end main()


/* Only used with strings and char arrays
puts()

puts("Hello");
puts(name);

<-------------------->
gets()
- Used the read strings from standard input
-However, it will reaxd white-space characters unlike scanf("%s"... )

Assigning a string to a pointer::

1. char my_string[] = {'s','o','m','e', ' ','t','e','x','t',\0'};
2. char my_string[] = "some text";

char *p;
p = "some text";    <-------- char *p ="some text";

*/





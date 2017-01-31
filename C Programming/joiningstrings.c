// 3. Concatenating a string
// (joining two strings)
#include <stdio.h>
#include <string.h>

main()
{
    
char str1[15] = "first & ";
char str2[ ] = "second";
strcat(str1, str2); // Joins str2 onto str1
puts(str1); // displays str1

getchar();
}
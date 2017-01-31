/* Program to enter a single character
*/
#include <stdio.h>
main()
{
  char ch;
    
    printf("Enter a character\n");
    
    scanf("%c", &ch);
    flushall();
    printf("You entered %c", ch);
    
   getchar();
    
}
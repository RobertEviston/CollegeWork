/*
Name: Robert Eviston
Date: 06/03/2014
*/
#include <string.h>
#include <stdio.h>

main()
{

char name[] = {'R', 'o', 'b', 'e', 'r', 't'};
    
// what is wrong with the following statements?
    
puts(name); 
scanf("%s", &name);
flushall();
strcpy(name, "Philip");
*(name + 5) = 'a';
*(name + 3) = 'z';
puts(name);
//name = "Philip";

getchar();
}

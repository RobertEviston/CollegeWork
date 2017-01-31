// 4. Comparing strings

#include <stdio.h>
#include <string.h>

main()
{
    char str1[5];
    char str2[5] = "john";
    
    scanf("%c", "john");
    printf("String 1 = %s\n", str2);
    int same = 1;
    
    same = strcmp(str1, str2);
    
    if (same == 0)
    {
        printf("Strings are identical");
    }
    
    else 
    {
        printf("Strings are not identical");
    }
    
    getchar();
}
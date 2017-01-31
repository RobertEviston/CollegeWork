/*program that uses the scanf() statement
*/
#include <stdio.h>
main()
{
    int var1;
    int var2;
    
    printf("enter your numbers\n");
    
    scanf("%d", &var1);
    scanf("%d", &var2);
    
    printf("\nYou entered %d and %d", var1, var2);
    
    getchar();
    
    //end main
}
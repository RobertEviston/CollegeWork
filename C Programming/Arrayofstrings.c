/* Array of strings */

#include <stdio.h>
#define SIZE 12

main()
{
    char *months[12] = {"Jan", "Feb", "Mar",
                        "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep",
                        "Oct", "Nov", "Dec",
                       };
    int i;
                       
    printf("The months of the year are:\n");
                       
    for(i=0;i<SIZE;i++)
    {
        printf("%s\n", *(months + i)); // or months[i]
        printf("%d\n", (months + i)); 
    } // end for()
    
    getchar();
    
} // end main()
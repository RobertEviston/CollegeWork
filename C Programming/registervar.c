/* 
Name: Robert Eviston
Date: 18/02/2014

Register variables
<<--------------------------------->>

A register variable is assigned memory in the CPU and not in the main memory (i.e RAM)

Register variables will increase the speed of exectution of a program

*/

#include <stdio.h>

main()
{
    register int i;
    
    for (i=0;i<100;i++)
    {
        printf("%d", i);
    }
    getchar();
}

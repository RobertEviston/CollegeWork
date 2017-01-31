#include <stdio.h>
main()
{
    int numbers[10] = {1, 7, 8, 2}; // [ 1,7,8,2,10,0,0,0,0,0 ]
    int *ptr = numbers;
    int i;
    
    *(ptr + 4) = 10; 
    *ptr--; 
    *(ptr + 3) = *(ptr + 9);
    ptr++;
    *ptr = 0;
    *(numbers + 1) = 1;
    
    for (i=0;i<10;i++)
    {
        printf("%d, ", *(ptr + i));
    }
    
    //(a) *(ptr + 4) = 10; Address of ptr up 4 = 10
    //(b) *ptr--; = 0*(numbers
    //(c) *(ptr + 3) = *(ptr + 9);
    //(d) ptr++;
    //(e) *ptr = 0;
    //(f) *(numbers + 1) = 1;
    
    int my_array[ ] = {1, 3, 4, 5, -1};
    int *p;
    p = my_array;
    
    //(a) *p
    //(b) *p + 4
    //(c) *(p + 4)
    
    getchar();
}
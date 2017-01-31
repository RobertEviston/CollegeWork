#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct st_struct
{
char name[50];
char sname[50];
int age;
char gender;
};

main()
{
    struct st_struct bono;
    struct st_struct myclass[50];
    strcpy(bono.name, "Mark");
    strcpy(bono.name, "Smith");
    bono.age = 26;
    bono.gender = 'M';
    printf("The size of bono is %d", sizeof(bono));
    printf("\nSize: %d", sizeof(bono.name));
    printf("\nSize: %d", strlen(bono.name));
    printd("The size of class is: %d", sizeof(myclass));
    getchar();
}
    
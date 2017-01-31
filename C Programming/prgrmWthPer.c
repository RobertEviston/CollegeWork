#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct emp_struct
{
    int id_number;
    int age;
    float salary; 
};
    
main() 
{
    struct emp_struct employee;
    // There is now an employee variable that has
    // modifiable variables inside it.
    employee.age = 22;
    employee.id_number = 1;
    employee.salary = 12000.21;
}
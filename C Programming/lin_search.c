//Linear Search in a binary file of records
#include <stdlib.h>
#include <stdio.h>
//binary search in a file of records
//student.st_id is the key

struct st_student 
{ 
	char name[20];
	int st_id;  //unique key 
	int age;  
	char gender;
}; 
    
typedef struct st_student type_student;

main()
{
  int key;
  int i = 0; //for an index
  FILE *f;
  type_student student; 
  
  key = 1;  //key of the student to find
  f=fopen("students.dat","rb"); //open the file

  i = 1;
    
  while(fread(&student,sizeof(type_student),1,f)!=0 && (student.st_id!=key))
  {
  i++;
  }
  
  if (key==student.st_id)
	{
		printf("Found at position %i \n",i);
		printf("The name of the student is %s",student.name);
	}
  else 
    {
        printf("The student is not in the file");
    }
    
    getchar();

}// end main()



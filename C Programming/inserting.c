#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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

void displayfile(char filename[])
{
	int i;
	FILE *f;
	type_student student;
	
	f = fopen(filename,"rb");
    
	while (feof(f)==0)
	{
	i = fread(&student,sizeof(type_student),1,f);
	if (i==1)
		{
			printf("\n Student ID: %i",student.st_id);
			printf("\n Student Name: %s",student.name);
			printf("\n Student Age: %i",student.age);
			printf("\n Student Gender: %c \n",student.gender);			
		}
	}
	fclose(f);
	return 0;
}

main()
{
	FILE *f;
	type_student student; 
	int i;
	int num,first,last,middle;
	int key;   //element to search
	

	// record to be insterted
	strcpy(student.name,"laura");
	student.st_id =12       ;
	student.age = 21;
	student.gender = 'f';
	
	//Inserting
	//Find the correct position 
	//Linear search
	type_student st_file;
	displayfile("students.dat");

	if((f=fopen("students.dat","rw+b"))==NULL)
    {
		printf("open read file error.\n");
		exit(1);	
    }
	
	fseek(f,0,SEEK_SET);
	while ((fread(&st_file,sizeof(type_student),1,f)!=0) && (st_file.st_id<student.st_id))
	{
        
	}	
	
	while (feof(f)==0)
	{
	  fseek(f,-1*sizeof(type_student),SEEK_CUR);
	  fwrite(&student,sizeof(type_student),1,f);  
	  fflush(f); //IMPORTANT! flush after each fwrite to be sure the data is written to the disk

	  //copy the st_file record into the student record
	  strcpy(student.name,st_file.name);
	  student.age = st_file.age;
	  student.st_id = st_file.st_id;
	  student.gender = st_file.gender;
	  
	  i=fread(&st_file,sizeof(type_student),1,f);		  
	}
    fwrite(&student,sizeof(type_student),1,f);
	fclose(f);	
	displayfile("students.dat");
	fclose(f);
    
    return 0; 
}
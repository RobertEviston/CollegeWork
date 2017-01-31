#include <stdio.h>
struct employee_struct { 
	int id_number; 
	int age; 
	float salary; }; 

main()
{	FILE * f;
	struct employee_struct employee[10];//array of 10 employees,size=10*12=120
	int i =0 ;	
	f=fopen("database.dat","wb");

	//fill the array
	for (i=0;i<10;i++)
	{
		employee[i].id_number=i+1; //start for 1 to assing ids
		employee[i].age=i+20; //start for 1 to assing ids
		employee[i].salary=10000*i; //start for 1 to assing ids		
	}
	//write the array in one instruction
	fwrite(employee,sizeof(struct employee_struct),10,f);


	fclose(f); return 0;}

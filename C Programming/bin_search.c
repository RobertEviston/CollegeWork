#include <stdio.h>

int main ()
{
	FILE *f;
	int size;
	int num, first, last, middle;
	int s;
	
	f = fopen ("numbers_sort.bin","rb");
	
	s = 11;  //number to search
	
	first = 0; 
	//get the size of the file
	fseek (f, 0, SEEK_END);   
    size= (ftell(f)) / (sizeof(int));
	last = size - 1; 
	middle = (first + last)/2; //element in the middle
	
	while( first <= last ) 
	{ 
        fseek(f,middle*sizeof(int),SEEK_SET);  //move the cursor to the middle
        fread(&num,sizeof(int),1,f);  //read the number
    
        if( num < s) //s is in the upper part
        {
            first = middle + 1;  //select the upper part
        }
    
        else if(num == s) 
        { 
            printf("%d found at location %d.\n", s, middle); 
            break; 
        } 
        
        else                   //s is in the lower part
        {
            last = middle - 1;
        } //select the lower part
        
        middle = (first + last)/2;   //new element in the middle
    }
    
    
	if (first > last) 
    {
        printf("Not found! %d is not present.\n", s);
    }
        
    getchar();
	fclose(f);
    return 0; 
}

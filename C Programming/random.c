#include <time.h>
#include <stdlib.h>

main()
{
	int i;
	int r = 0;
	//2. use srand
	srand(time(NULL));  //use this instruction once
	// 3.every time you need to generate a random integer execute the following:
	for (i=0;i<10;i++)
	{
		r = rand();
		printf ("Number: %d\n",r);
	}
}
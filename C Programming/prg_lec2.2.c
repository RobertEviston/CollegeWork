/* Storage Classes

<------------------------------------------------------------------------------------>
1. Auto variables

--> Keyword: auto
e.g.    auto int num1;
         auto float array1[5];
         
*Auto variables are local variables
--> they can only be used inside the function where thet are declared

*All variables are auto variables by deafult unless otherwise specified

e.g.    int num1;
         auto int num;
         
*Auto variables lose their data (i.e memory is freed )
  once the function ends its freed


<-------------------------------------------------------------------------------->
2. Static variables

--> Static variables are also local (Similar to auto variables)
--> However, static variables keep their date when the function 
     where they are declared ends. The data "persists"
     
    e.g.       static int num1;
                static float array1[100];
                
Data only lost when actual program ends.
<------------------------------------------------------------------------------>
*/


#include <stdio.h>
// Declare prototype
void fxn(void);
main()
{
    int i;
    
    for (i=0;i<5;i++)
    {
        fxn();
    }// end for()
    
    getchar();
} // End main()

void fxn()
{
    auto int auto_var = 0;
    static int static_var = 0;
    
    static_var++;
    auto_var++;
    
    printf("\n\t\tauto_var is %d, static _var is %d", auto_var, static_var);
} //end fxn()

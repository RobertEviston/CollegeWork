/* This is a currency converter for converting money from one to the other
Name: Robert Eviston
Date: 27th/Feb/2014
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

// Declare prototypes
float change_to_Euro(float[]); 
float change_to_Dollar(float[]);
main()
{
    float money[SIZE]; // Floating numbers to beconverted
    int menu; // menu operation
    int i;
    
    do
    {
        // This is the menu displayed when theprogram is run
        printf("\t\tThis is a Currency Converter!\n");
        printf("\t\t\tMain Menu\n\n");
        printf("Please choose the currency you would like to convert your money into:\n");
        printf("1 =\tConvert to Euros\n");
        printf("2 =\tConvert to Dollar\n");
        printf("\n3 =\tExit\n"); // Choice to exit program
        scanf("%d", &menu);
        
        if(menu == 1) // option 1 chosen
        {
            system("cls");
            printf("Please enter 3 values to be converted:\n");
            for(i=0;i<SIZE;i++)
            {
                scanf("%f", &money[i]);
            } 
            change_to_Euro(money); //calls function
            menu = 0;
        } // end case '1'
            
        else if(menu == 2)
        {
            system("cls");
            printf("Please enter 3 values to be converted:\n");
            for(i=0;i<SIZE;i++)
            {
                scanf("%f", &money[i]);
                flushall();
            }
            change_to_Dollar(money); // calls function
            menu = 0;
        } // end case '2'
            
        else if(menu == 3)
        {
            system("cls");
            printf("Thank you, Goodbye!");
        } // end case '3'
        else 
        {
            system("cls");
            printf("Not a valid choice please enter again\n\n"); // Reverts to main menu for the user to put in correct option choice.
        }
    } while (menu != 3); // Program runs forever until option 3 is chosen.
    
    getchar();
} //end main()


// implement function1
float change_to_Euro(float euro_array[])
{
    system("cls");
    int j;
    
     for(j=0;j<SIZE;j++)
    {
        printf("$%f = €", euro_array[j]);
        euro_array[j] = euro_array[j] * 1.36;
        printf("%f\n", euro_array[j]);
    } // end for()
    printf("\nThese are the values converted\n\n");
} //end change_to_Euro


// Implement function2
float change_to_Dollar(float dollar_array[])
{
    system("cls");
    int k;
    
     for(k=0;k<SIZE;k++)
    {
        printf("€%f = $", dollar_array[k]);
        dollar_array[k] = dollar_array[k] * 0.73;
        printf("%f\n", dollar_array[k]);
    } // end for()
    printf("\nThese are the values converted\n\n");
} //end change_to_Dollar


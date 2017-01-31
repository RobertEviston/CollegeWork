/*
This program is designed to add two numbers together.
Author: Robert Eviston
Date: 10th October 2013
*/
#include <stdio.h>
main()

{
    int num1;
    int num2;
    int ans;
    
    printf("Please enter two numbers to be added to together\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    flushall();
    
    ans = num1 + num2;
    
    if (ans < 10)
    {
        printf("Answer: %d, also your answer is smaller than 10" ,ans);
    }
    else if (ans > 10)
    {
        printf("Answer: %d, also your answer is larger than 10", ans);
    }
    else 
    {
        printf("Answer: %d, your number is 10", ans);
    }
    
    getchar();
    
}
//Program to check whether a number is prime or not

#include<stdio.h>
void main()
{
    int n,i,count=0 ;

    printf("Enter an Integer:\t");
    scanf("%d",&n);
    
    /* Loop which count, how many times given number is
    divisible and remainder is 0*/
    for ( i=1 ; i<=n; i++)
    {
        if(n%i == 0)
        {
            count++; // Counting no of divisible values 
        }
    }

    //Count is the no of Factors of given number
    if(count==2)
        // Prime number only have 2 factors so only 2 number to count
        {
            printf("\tYour number is Prime.\n");
        }
    else
        {
            printf("\tYour number is not Prime.\n");
        }

}
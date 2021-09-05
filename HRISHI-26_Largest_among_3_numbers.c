//Program to find the largest among 3 numbers

#include<stdio.h>
void main()

{
     // Variable declaration
    int a,b,c;

    //Reading values
    printf("Enter 3 integers\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    
    //Checking and printing which is greater value  using loop
    if(a>b && b>c)
    printf("%d is greater value\n",a);
    else if(a<b && b<c)
    printf("%d is greater value\n",c);
    else if (a<b && b>c)
    printf("%d is greater value\n",b);
}
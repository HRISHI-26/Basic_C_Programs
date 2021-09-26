//Program to to check whether a given element is present in an array
#include<stdio.h>
void main()
{
    int array[50],i,n,s;
    
    printf("Enter the Limit of Array: \n");
    scanf("%d",&n);

    printf("Enter Elements into Array: \n");
    for ( i=1; i<=n; i++)
    {
        scanf("%d",&array[i]);
    }

    // Linear Search 
    printf("Search for an element here:\n");
    scanf("%d",&s);

    //Searching loop
    for(i=1 ; i<=n ; i++)
    {    
        if(array[i]==s)        
        {
            printf("The Position Of number is: ")
            printf("%d \n",i);
            break;
        }
        if(i==n)
        {
            printf("Search not found !!! \n");
        }
    }
}
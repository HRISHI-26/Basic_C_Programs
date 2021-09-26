//Program to reverse a string using function

#include<stdio.h>
void reverse(char []);
void main()
{
    char h[20];
    printf("Enter a string: \t");
    scanf("%s",h);
    reverse(h);
}
void reverse(char r[])
{
    char x[20];
    int i,length=0;
    for ( i=0 ; r[i]!='\0' ; i++ )
    length++;
    for ( i=0 ; i<length ; i++ )
    x[i] = r[length-i-1];
    printf("Reverse of string is :\t%s",x);
}
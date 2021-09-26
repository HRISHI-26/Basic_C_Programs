//Program to to count number of spaces,digits,consonents and vowels

#include<stdio.h>
int main()
{
    //Variable declaration
    char str[50];
    int i,v=0,c=0,d=0,s=0;
    //Asking for string
    printf("Enter a string\n");
    gets(str);
    //Loop for going throught string
    for(i=0 ; str[i]!='\0' ; i++)
         //Counting number of vowels,digits,spaces and consonents
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'
                ||str[i]=='E'||str[i]=='I'||str[i]=='O'|| str[i]=='U')
                {
                    v++;
                }
            else if(str[i]>='0' && str[i]<='9')
                {
                    d++;
                }
            else if(str[i]==' ')
                {
                s++;
                }
            else if(str[i]>='a'&&str[i]<='z' || str[i]>='A'&&str[i]<='Z')
                {
                    c++;
                }
        }
    //Displaying number of vowels,spaces,digits and consonents
        printf("Number of vowels= %d \n",v);
        printf("Number of digits= %d \n",d);
        printf("Number of spaces= %d \n",s);
        printf("Number of consonents= %d \n",c);
return 0;
}

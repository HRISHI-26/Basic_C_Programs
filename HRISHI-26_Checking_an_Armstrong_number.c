//Program to Check whether the given value is Armstrong
//It means: Sum of cubes of the digits in given value gives the same number

 #include<stdio.h>
 void main()
 {
    int n,q,rem,c,sum=0;

    printf("Enter an Integer :\n");
    scanf("%d",&n); 
    
    //Loop that Perform calculation for Armstrong condition 
     
    /*NB: Increase number of "rem" according to 
          number of digits in reading value    */
    for( q=n ; q>0 ;q=q/10 )
    {
        rem = q % 10;
        c = rem*rem*rem;
        sum = sum + c;
    }

    // Checking calculated value same as of actual value
    if(sum==n)
    {
        printf("Its an Armstrong Number\n");
    }
    else
    {
        printf("Its not an Armstrong Number\n");
    }

}
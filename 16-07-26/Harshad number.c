#include<stdio.h>
void main()
{
    int n,m,sum=0,t;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    if(t%sum==0)
    {
        printf("\nThe given number is Harshad number");
    }
    else
    {
        printf("\nThe given number is not a Harshad number");
    }

}
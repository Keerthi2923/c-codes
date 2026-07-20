#include<stdio.h>
void main()
{
    int n,sum=0,p=1,m;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        sum=sum+m;
        p=p*m;
        n=n/10;
    }
    if(sum==p)
    {
        printf("The given number is Spy number");
    }
    else
    {
        printf("The given number is not a Spy number");
    }
}
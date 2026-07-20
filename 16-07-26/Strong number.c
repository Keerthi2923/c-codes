#include<stdio.h>
void main()
{
    int i,n,fact,sum=0,digit,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        fact=1;
        for(i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("The given number is Strong number");
    }
    else
    {
        printf("The given number is Not a Strong number");
    }
}
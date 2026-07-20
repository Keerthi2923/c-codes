#include<stdio.h>
void main()
{
    int n,sum,digit=0,m;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>9)
    {
        sum=0;
        while(n!=0)
        {
            m=n%10;
            sum=sum+m;
            n=n/10;
        }
        n=sum;
    }
    if(sum==1)
    printf("The given number is Magic number");
    else
    printf("The given number is not a Magic number");
}
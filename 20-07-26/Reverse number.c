#include<stdio.h>
void main()
{
    int n,r=0,digit=0;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n!=0)
    {
        digit=n%10;
        r=r*10+digit;
        n=n/10;
    }
    printf("Reverse of number is %d",r);
}
#include<stdio.h>
void main()
{
    int n,t;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n*n;
    if((t%10==n)||(t%100==n)||(t%1000==n))
    {
    printf("Automorphic number");
    }
    else
    {
    printf("Not an Automorphic number");
    }
}
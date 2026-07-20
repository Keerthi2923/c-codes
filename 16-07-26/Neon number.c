#include<stdio.h>
void main()
{
    int n,sum=0,t,m;
    printf("Enter a number:");
    scanf("%d",&n);
    t=n*n;
    while(t!=0)
    {
      m=t%10;
      sum=sum+m;
      t=t/10;
       
    }
    if(n==sum)
    {
        printf("Neon number");
    }
    else
    {
        printf("Not a Neon number");
    }
}
#include<stdio.h>
int fib(int n);
int fib(int n)
{
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1) + fib(n-2);

}
void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d",fib(i));
    }
}
    

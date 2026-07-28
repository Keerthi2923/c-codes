#include<stdio.h>
int fibo(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
int fibo(int n)
{
    int a=0,b=1,c,i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
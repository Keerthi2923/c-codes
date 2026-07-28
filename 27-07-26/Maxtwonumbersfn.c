#include<stdio.h>
void max();
void max()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }
}
void main()
{
    max();
}
#include<stdio.h>
void num(int a);
void num(int a)
{
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}
void main()
{
    int a;
    num(a);
}
#include <stdio.h>
void main()
{
    int a,b,n;
    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter b value: ");
    scanf("%d", &b);
    while(b!=0)
    {
        n=a%b;
        a=b;
        b=n;
    }
    printf("GCD of two numbers is %d", a);
}
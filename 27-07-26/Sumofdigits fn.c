#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
int sum(int n)
{
    int sum=0,m;
    while(n!=0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    return sum;
}
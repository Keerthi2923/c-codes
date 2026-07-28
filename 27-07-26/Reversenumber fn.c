#include<stdio.h>
int rev();
int rev()
{
    int num,r=0,digit=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num!=0)
    {
        digit=num%10;
        r=r*10+digit;
        num=num/10;
    }
    return r;
}
int main()
{
    printf("%d",rev());
    return 0;
}
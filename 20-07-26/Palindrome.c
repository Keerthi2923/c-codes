#include<stdio.h>
void main()
{
    int n,r=0,digit=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        digit=n%10;
        r=r*10+digit;
        n=n/10;
    }
    if(temp==r)
    printf("%d is Palindrome",r);
    else
    printf("%d is not a Palindrome",r);
}
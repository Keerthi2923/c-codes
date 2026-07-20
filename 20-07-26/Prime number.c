#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("The given number is Invalid.\n");
    }
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("The given number is Prime");
        }
        else
        {
            printf("The given number is not Prime");
        }
    }

}
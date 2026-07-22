#include<stdio.h>
void main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",i*j);
        }
        printf("\n");
    }   
}
#include<stdio.h>
void main()
{
    int n,i,j,k,r=1;
    printf("Enter no.of rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" \t");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf("%d \t",r++);
        }
        printf("\n");
    }
    
}
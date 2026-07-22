#include<stdio.h>
void main()
{
    int n=5,i,j,k,l;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        for(l=2;l<=i;l++)
        {
            printf("%d",l);
        }


        printf("\n");
    }
}
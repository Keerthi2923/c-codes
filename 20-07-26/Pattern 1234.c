#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=0;i<4;i++)
    {
        for(j=1;j<=4;j++)
        {
        printf("%d \t",k++);
        }
        printf("\n");
    }
}
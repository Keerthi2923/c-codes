#include <stdio.h>
void main() 
{
    int n=5,i,j,c;
    for(i=0;i<n;i++) 
    {
        c=1;
        for(j=0;j<=i;j++) 
        {
            printf("%d\t",c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
}
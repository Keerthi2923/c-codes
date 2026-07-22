#include <stdio.h>
void main() {
    int i,j,n=4,num=1;
    for(i=1;i<=n;i++) 
    {
        if(i%2!=0) 
        {
            for(j=1;j<=5;j++)
            {
                printf("%d\t", num++);
            }
        }
        else 
        {
            num = num + 4;
            for(j=1;j<=5;j++)
            {
                printf("%d\t", num--);
            }
            num = num + 6;
        }
        printf("\n");
    }
}
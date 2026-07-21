#include <stdio.h>
void main() {
    int n,i,j,k;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) 
    {
        if(i % 2 == 1)
            j = 1;
        else
            j = 0;

        for(k=1;k<=i;k++) 
        {
            printf("%d ", j);
            j=1-j;
        }
        printf("\n");
    }
}
#include <stdio.h>
void main() {
    int i, j;
    for(i=1;i<=7;i++) 
    {
        for(j=1;j<=7;j++)
         {

            if(i == 1 || i == 7 || j == 1 || j == 7)
                printf("4");
            else if(i == 2 || i == 6 || j == 2 || j == 6)
                printf("3");
            else if(i == 3 || i == 5 || j == 3 || j == 5)
                printf("2");
            else
                printf("1");
        }
        printf("\n");
    }
}
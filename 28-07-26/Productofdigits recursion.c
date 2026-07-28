#include <stdio.h>
int product(int n)
{
    if(n==0)
        return 1;
    return (n%10) * product(n/10);
}
void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Product of digits = %d", product(n));
}
#include<stdio.h>
void main()
{
    int sum=0,n,i,a[n];
    printf("Enter the no.of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of the elements is %d",sum);
}
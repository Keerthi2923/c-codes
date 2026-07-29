#include<stdio.h>
void main()
{
    int max,n,i,a[n];
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    max=a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>max)
        max=a[i];
    }
    printf("Largest element in the Array is %d",max);
}
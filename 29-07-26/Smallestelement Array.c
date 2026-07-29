#include<stdio.h>
void main()
{
    int min,n,i,a[n];
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
           min=a[i];
        else
           min;
    }
    printf("Smallest element in the Array is %d",min);
}
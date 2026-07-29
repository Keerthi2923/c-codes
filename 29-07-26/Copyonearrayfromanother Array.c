#include <stdio.h>
void main()
{
    int a[100],b[100],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("Copied array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
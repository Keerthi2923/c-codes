#include <stdio.h>
void main()
{
    int a[100],n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reversed array is:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}
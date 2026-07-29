#include <stdio.h>
void main()
{
    int a[100],n,i;
    int sum=0;
    float avg;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=(float)sum/n;
    printf("Average=%.2f",avg);
}
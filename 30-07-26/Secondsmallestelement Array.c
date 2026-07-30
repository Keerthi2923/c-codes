#include <stdio.h>
void main()
{
    int a[100],n,i;
    int smallest,second;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(a[0] < a[1])
    {
        smallest = a[0];
        second = a[1];
    }
    else
    {
        smallest = a[1];
        second = a[0];
    }
    for(i=2;i<n;i++)
    {
        if(a[i] < smallest)
        {
            second = smallest;
            smallest = a[i];
        }
        else if(a[i] < second && a[i] != smallest)
        {
            second = a[i];
        }
    }
    printf("Second smallest element = %d",second);
}
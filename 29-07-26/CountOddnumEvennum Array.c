#include<stdio.h>
void main()
{
    int i,n,a[n],odd_count=0,even_count=0;
    printf("Enter the no of Elements:");
    scanf("%d",&n);
    printf("Enter the Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    printf("Even count is %d\n",even_count);
    printf("Odd count is %d\n",odd_count);

}
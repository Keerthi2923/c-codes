#include <stdio.h>
void main()
{
    int n, temp, m, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        m = temp % 10;
        sum = sum + (m * m * m);
        temp = temp / 10;
    }
    if (sum == n)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
<<<<<<< HEAD
}
=======
}
>>>>>>> f1e30f4eabd2c2e6234f5663298748d28d010f30

#include <stdio.h>
void main() {
    int n, i, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);
    int prime1 = 1;
    if (n <= 1)
        prime1 = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime1 = 0;
                break;
            }
        }
    }
    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }
    int prime2 = 1;
    if (rev <= 1)
        prime2 = 0;
    else {
        for (i = 2; i <= rev / 2; i++) {
            if (rev % i == 0) {
                prime2 = 0;
                break;
            }
        }
    }

    if (prime1 && prime2)
        printf("Twisted Prime Number");
    else
        printf("Not a Twisted Prime Number");
}
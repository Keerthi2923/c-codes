#include <stdio.h>
void main() {
    int n, temp, rem, duck = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    while (temp > 0) {
        rem = temp % 10;

        if (rem == 0) {
            duck = 1;
            break;
        }

        temp = temp / 10;
    }

    if (duck)
        printf("Duck Number");
    else
        printf("Not a Duck Number");
}
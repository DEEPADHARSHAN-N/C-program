#include <stdio.h>

int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int n, temp, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp = temp / 10;
    }

    if (isPrime(n) && isPrime(rev))
        printf("%d is a Twisted Prime Number.\n", n);
    else
        printf("%d is Not a Twisted Prime Number.\n", n);

    return 0;
}
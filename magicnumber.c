#include <stdio.h>

// Function to calculate sum of digits
int sumOfDigit(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;   // add last digit
        n /= 10;         // remove last digit
    }
    return sum;
}

// Function to check if number is Magic Number
int isMagicNumber(int n) {
    int sum = n;
    while (sum > 9) {    // keep reducing until single digit
        sum = sumOfDigit(sum);
    }
    return (sum == 1);   // true if final digit is 1
}

int main() {
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);

    if (isMagicNumber(n)) {
        printf("%d is a Magic Number\n", n);
    } else {
        printf("%d is NOT a Magic Number\n", n);
    }

    return 0;
}

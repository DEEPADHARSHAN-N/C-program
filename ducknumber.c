#include <stdio.h>

// Function to check Duck Number
int isDuckNumber(int n) {
    int firstDigit = n;

    // Find the first digit
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // If first digit is 0 → not Duck
    if (firstDigit == 0) {
        return 0;
    }

    // Check remaining digits for zero
    while (n > 0) {
        if (n % 10 == 0) {
            return 1;  // found zero → Duck Number
        }
        n /= 10;
    }

    return 0;  // no zero found → not Duck
}

int main() {
    int n;
    printf("Enter The Number: ");
    scanf("%d", &n);

    if (isDuckNumber(n)) {
        printf("%d is a Duck Number\n", n);
    } else {
        printf("%d is NOT a Duck Number\n", n);
    }

    return 0;
}

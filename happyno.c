#include <stdio.h>

// Function to calculate sum of squares of digits
int sumOfSquares(int n) {
    int sum = 0, digit;
    while (n > 0) {
        digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Function to check if number is happy
int isHappy(int n) {
    int slow = n, fast = n;
    do {
        slow = sumOfSquares(slow);               // move one step
        fast = sumOfSquares(sumOfSquares(fast)); // move two steps
    } while (slow != fast);

    return (slow == 1); // if cycle ends at 1 → happy
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isHappy(num))
        printf("%d is a Happy Number!\n", num);
    else
        printf("%d is NOT a Happy Number.\n", num);

    return 0;
}

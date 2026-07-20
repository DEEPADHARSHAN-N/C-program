#include <stdio.h>

int main() {
    int num, digit;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;

    while (temp > 0) {
        digit = temp % 10;       
        sum += digit;            
        product *= digit;        // sum = product main concept
        temp /= 10;              
    }

    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %d\n", product);

    if (sum == product) {
        printf("%d is a Spy Number\n", num);
    } else {
        printf("%d is NOT a Spy Number\n", num);
    }

    return 0;
}


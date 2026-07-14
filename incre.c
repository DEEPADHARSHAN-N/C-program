#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Increment and Decrement operations:\n");
    printf("a++: %d\n", a++);
    printf("++a: %d\n", ++a);
    printf("b--: %d\n", b--);
    printf("--b: %d\n", --b);
    return 0;
}
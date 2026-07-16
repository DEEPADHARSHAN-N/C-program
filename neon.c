#include <stdio.h>

int main () {

    int n , temp , sum = 0  ;
    printf("Enter the number :");
    scanf("%d", &n);

    temp = n * n;
    while(temp != 0){
        sum += temp % 10;
        temp /= 10;
    }
    if(sum == n) {
        printf("%d is a neon number\n", n);
    } else {
        printf("%d is not a neon number\n", n);
    }
    return 0;
}
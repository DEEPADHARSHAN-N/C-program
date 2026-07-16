#include <stdio.h>
int main() {

    int n ,digit, sum = 0;
    printf(" Enter The Number :");
    scanf("%d",&n);

    while(n!=0){
        digit = n % 10;
        printf("%d",digit);

        sum = sum + digit;
        n = n /10;
    }

    printf(" Sum Is %d", sum);

    return 0;
}
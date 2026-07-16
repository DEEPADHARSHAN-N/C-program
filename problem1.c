#include <stdio.h>

int main () {

    int num  , a , sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0){
        a = n % 10;
       num = n;
       sum += a * a * a;
         n= n / 10;
         printf("The sum of the cubes of the digits of %d is %d\n", num, sum);
    }
    return 0;
}
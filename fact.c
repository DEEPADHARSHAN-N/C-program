#include <stdio.h>

int main () {

    int i;
    int fact = 1;
    for(i=1; i<=5;i++){

        fact = fact*i;

    }

    printf("Factorial of 5 = %d\n" , fact );

    return 0;

}
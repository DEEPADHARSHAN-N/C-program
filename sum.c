#include <stdio.h>

int main() {

    int sum = 5;
    int i;

    for (i=1;i<=sum;i++){

        printf("%d + %d = %d\n" , sum , i , sum + i );
    }

    return 0;
}
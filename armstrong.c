#include <stdio.h>

int main () {

    int i, n , rem , sum;

    printf("armstrong numbers between 1000 to 9999 are: \n");
    for(i = 1000; i <= 9999; i++)
    {
        n = i;
        sum = 0;
        while (n != 0)
        {
            rem = n % 10;
            sum += rem * rem * rem * rem;
            n /= 10;
        }
        if (sum == i)
            printf("%d\n", i);
    }
    return 0;
}
#include <stdio.h>

int main ()  {

    int i, n , rem , sum;
    int a , b ;
    printf("Enter the range to find armstrong numbers: \n");
    scanf("%d %d", &a , &b);
    printf("armstrong numbers between %d to %d are: \n", a , b);
    for(i = a; i <= b; i++)
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
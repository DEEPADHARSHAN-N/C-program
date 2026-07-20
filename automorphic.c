#include <stdio.h>

int main () {

    int n , sq ;
    printf ("Enter The Number :\n");
    scanf("%d" , &n);

    sq = n * n ;
    
    if((n < 10 && sq % 10 == n) || ( n >= 10 && sq % 100 == n)){
        printf("%d Is Automorphic \n" , n );

    }
    else {
        printf("%d Is Not A Automorphic \n" , n);
    }
}
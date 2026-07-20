#include <stdio.h>

int main () {

    int n ,original, reversed = 0 , digit;
    printf("Enter The Number :");
    scanf("%d" , &n);

    original = n;

    while(n!=0){

        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed){
        printf("%d The Number Is Palindrome",original);
    }
    else{
        printf("%d The Number Is Not An A Palindrome",original);
    }
}
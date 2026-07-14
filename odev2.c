#include <stdio.h>
int main(){
    int number;
    printf("Enter an integer: ");

    scanf("%d", &number);

    if ((number / 2)  * 2 ==  number){

        printf("%d is even \n", number);
    } else {
        printf("%d is odd \n", number);
    }
    return 0;
}
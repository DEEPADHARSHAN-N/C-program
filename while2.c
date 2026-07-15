#include <stdio.h>

int main () {

    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);

    while(1){

        if(n%2==0){

            printf("The Number Is Even \n");
        }
        else{
           
            printf("The Number Is Odd \n");

        }

        return 0;
        }
}
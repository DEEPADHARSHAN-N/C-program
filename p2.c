#include<stdio.h>
int main() {
    int a=1;
    int b=3;
    b=a++ + a++ + a++ + a++ + a++;
    printf("%d",b);
}
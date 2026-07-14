#include <stdio.h>

int main() {

    int mark;
    printf("Enter your mark : ");
    scanf("%d", &mark);


    if(mark>=90){
        printf("Grade o\n");
    }
    else if(mark>=80){
        printf("Grade A+\n");
    }
    else if(mark>=70){
        printf("Grade A\n");
    }
    else if(mark>=60){
        printf("Grade B+\n");
    }
    else if(mark>=50){
        printf("Grade B\n");
    }
    else if(mark<50){
        printf("FAIL\n");
    }
    return 0;
}
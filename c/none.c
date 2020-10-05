#include<stdio.h>

int main(){

    int num[2] = 0;
    int output[] = 3;

    printf("Enter integer: \n");
    scanf("%d", &num);

    if (isdigit(num[0]) && isdigit(num[1])) {
        printf("You entered an integer.\n");
    } else {
        printf("You did not enter an integer.\n");
    }
}
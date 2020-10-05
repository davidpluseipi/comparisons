#include<stdio.h>

int main(){

    int num = 0;
    char term;
    int output = 3;

    printf("Enter integer: \n");


    if (scanf("%d%c", &num, &term) != 2 || term != '\n') {
        printf("You did not enter an integer.\n");
        output = 1;
    } else {
        printf("You entered an integer.\n");
        output = 0;
    }
    return output;
}

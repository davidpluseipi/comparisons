#include <stdio.h>
#include <stdlib.h>

// global variables
int age = 15;
int min = 0;
int max = 20;

// main function
int main () {
    if (age == min) {
        printf("age is at the minimum");
    } else if (age > min && age < max) {
        printf("age is in range");
    } else {
        printf("age is at or beyond max");
    }

    return 0;
}
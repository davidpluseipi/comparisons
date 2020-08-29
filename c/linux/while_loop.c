#include <stdio.h>
#include <stdlib.h>

// global variables

int max = 5;
int count = 0;

// main function
int main() {

    while (count < max) {
        //do
        printf("the count is: %d\n", count);
        count++;
    }

    printf("count is at the max value of %d\n", max);
    printf("program terminated\n");
}

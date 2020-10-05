#include<stdio.h>
#include<stdlib.h>

// define and declare global variables
int F = 0;
int C = 0;

int main() {

    // print the message requesting the info from the user
    // but do not put in the \n to keep the cursor on the same line
    printf("Enter temperature(F): ");

    // call scanf, asking the user for input, and tell it to expect
    // an integer with %d and make sure it knows what variable gets
    // value with the & 
    scanf("%d", &F);

    // perform the conversion
    C = (F - 32) * (5. / 9);
    
    // print the result
    printf("The entered temperature in C is: %d\n", C);

    return 0;
}





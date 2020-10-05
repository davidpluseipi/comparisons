#include<stdio.h>

int main() {
    
    // declare a character array (i.e. a string)
    char myString[50];

    // provide a prompt
    printf("Enter a single line to text: ");
    
    // get up to 50 characters using the 'standard input' and store them in myString
    fgets(myString, 50, stdin);

    // print this just to see if the program is working correctly
    printf("You entered: %s", myString);

    return 0;
}
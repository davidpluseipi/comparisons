#include<stdio.h>

int input = 0;
char term;
int output = 0;

int main(){

for (int i=0; i < 5; i++) {
    

    printf("Enter input: \n");
    
    if (scanf("%d%c", &input, &term) != 2 || term != '\n') {
        printf("You did not enter an integer.\n");
        output = 1;
    } else {
        if (i == 4) {
            printf("Thanks I'm happy with 5.\n")
        }
        printf("You entered an integer.\n");
        printf("Please enter another.\n");
        
        output = 0;
    }

}
    return output;
}
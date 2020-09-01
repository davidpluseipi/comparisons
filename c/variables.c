#include<stdio.h>
#include<stdlib.h>

int main() 
{
    // 1st iteration
    printf("There once was a man named George.\n");
    printf("He was 70 years old.\n");
    printf("He really liked the name George,\n");
    printf("but did not like being 70.\n\n");

    // 2nd iteration (using variables)
    char name[] = "John";
    int age = 35;

    printf("There once was a man named %s.\n", name);
    printf("He was %d years old.\n", age);
    printf("He really liked the name %s,\n", name);
    printf("but did not like being %d.\n\n", age);

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h> // strcpy, strcat, 

int main() {
    // In C, a string is a sequence of characters terminated with a null character \0
    char c[] = "c string";

    /* When the compiler encounters a sequence of characters enclosed in double quotes,
       it appends a null character \0 and the end by default.  */
    char c2[] = {'c', ' ', 's', 't', 'r', 'i', 'n', 'g', '\0'};

    // To DECLARE a string, you just need char, the variable name, and the size of the array
    char s[5];

    /* Here s now has 5 elements, s[0], s[1], s[2], s[3], and s[4]. */

    // To INITIALIZE a string, there are 4 ways.
    char s1[] = "abcd"; // here you are specifying the array length through its definition "abcd"

    char s2[50] = "abcd"; /* here you a saying, right now the length is 5, but later I want the 
                             length to be up to 50 */

    char s3[] = {'a', 'b', 'c', 'd', '\0'}; // similar to s1 above, but specifying each character

    char s4[5] = {'a', 'b', 'c', 'd', '\0'}; // similar to s2 above, but specifying characters manually

    /* Here s1, s2, s3, and s4 now have the same 5 elements, 
        s1[0] = 'a';
        s1[1] = 'b';
        s1[2] = 'c';
        s1[3] = 'd';
        s1[4] = '\0'; */

    // DO NOT try to define a string longer than its container, e.g.
    //char s5[5] = "abcde";  // LHS declaration is length of 5, but RHS array length is 6 (a,b,c,d,e, and \0)

    // Assigning values to string
    /* Arrays and strings are second-class citizens in C. They do not support the assignment 
    operator once declared. */
    char s6[100];
    //s6 = "C programming"; // this will result in an error (array type unassignable or array must be modifiable)

    printf("\n--------------------------------------------------\n");
    // Instead, use the strcpy() function to copy a string to another string
    char str1[20] = "C programming";
    char str2[20]; // note: str2 is declared empty, but with the right amount of memory to hold str1
    strcpy(str2,str1);
    // puts() can display a string
    puts(str2); // str1 was copyed onto str2

    printf("\n--------------------------------------------------\n");
    // String Concatenate
    // Adds one string onto another
    char str3[100] = "This is ", str4[] = "the C language."; // example of declaration on single line of same datatype
    strcat(str3, str4);  // concatenates the two strings and stores the result in the first
    puts(str3); // contains the entire phase
    puts(str4); // contains just "the C language."

    printf("\n--------------------------------------------------\n");
    // Read String from the user
    // scanf() reads the sequence of characters until it encounters whitespace 
    // (space, newline, tab, etc.)
    // https://en.wikipedia.org/wiki/Scanf_format_string
    char name[20];
    printf("Enter name: ");
    scanf("%19s", name);
    /* In case of a string (character array), the variable itself points
     to the first element of the array in question. Thus, there is no need 
     to use the ‘&’ operator to pass the address. */
    printf("Your name is %s.", name);

    // Get rid of the new-line character that scanf adds to the end of arrays
    int len;
    len = strlen(name);
    /* 
    printf("%d",len);
    if (name[len-1] == '\n') { // 1) verify \n is the last character
        name[len-1] = '\0';       // 2) replace it with 0
    }
    printf("%s",name);
    */
    int the_size = sizeof(name);
    printf("%d", the_size);
    //name[len-1] = malloc(sizeof(name)-1);

    

    printf("\n--------------------------------------------------\n");
    // fgets() will read a entire line
    
    char the_name[30];
    printf("Enter name: ");
    fgets(the_name, sizeof(the_name), stdin); 
        // inputs are the variable name that will store the input,
        // its size and 
        // the keyword stdin, meaniang standard input
    printf("Name: ");
    puts(the_name); // displays the string

    printf("\n--------------------------------------------------\n");


    printf("\n--------------------------------------------------\n");


    printf("\n--------------------------------------------------\n");

    return 0;
}
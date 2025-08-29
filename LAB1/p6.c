/*
“This program reads a string using fgets and then counts its length using a pointer instead of array indexing.
The pointer starts at the beginning of the string and moves forward one character at a time until it reaches 
either the null terminator or a newline character.
For each character it passes, we increase the length counter. This way,
we count only the actual characters typed by the user without including the newline from pressing Enter.”
*/
#include <stdio.h>

int main() {
    char str[100]; // store characters
    char *ptr; // point to char
    int length = 0; // counter to store how many char are in the string

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin); // reads input into str, 
                                    // stops when char lim is reached or " Enter " is pressed

    ptr = str; // points to the first char in str array

    while (*ptr != '\0' && *ptr != '\n') { 
        length++;
        ptr++;
    } // loop stops when a new line is started or reaches end of string 

    printf("%d\n", length); // prints length of string

    return 0;
}

#include <stdio.h>

int main() {
    int array[10] = {500, 1, 255, 7, -12, 40, 42, 999, 50, 227}; //declare array w spec ints

    int max = array[0]; // assume first element
    int min = array[0]; // ^^

    for (int i = 1; i < 10; i++) { 
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    char choice;
    printf("Enter 'm' for max, 'n' for min, or 'b' for both: ");
    scanf(" %c", &choice); 

    if (choice == 'm' || choice == 'M') {
        printf("Maximum value = %d\n", max);
    } else if (choice == 'n' || choice == 'N') {
        printf("Minimum value = %d\n", min);
    } else if (choice == 'b' || choice == 'B') {
        printf("Maximum value = %d\n", max);
        printf("Minimum value = %d\n", min);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int array[10] = {500, 1, 255, 7, -12, 40, 42, 999, 50, 227};

    int max = array[0];
    int min = array[0];

    // Loop through the rest of the array
    for (int i = 1; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}

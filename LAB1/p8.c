#include <stdio.h>

int main() {
    int num, bit;

    printf("Enter integer: ");
    scanf("%d", &num);

    printf("Enter bit: ");
    scanf("%d", &bit);

    // Check if bit is set using bitwise AND
    if (num & (1 << bit)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}

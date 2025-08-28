#include <stdio.h>

int main() {
    int num, bit, override;

    printf("Enter integer: ");
    scanf("%d", &num);

    printf("Enter bit: ");
    scanf("%d", &bit);

    printf("Enter override: ");
    scanf("%d", &override);

    if (override == 1) {
        // Set the bit
        num |= (1 << bit);
    } else {
        // Clear the bit
        num &= ~(1 << bit);
    }

    printf("%d\n", num);

    return 0;
}

#include <stdio.h>

int main() {
    int num, bit;

    printf("Enter integer: ");
    scanf("%d", &num);

    printf("Enter bit: ");
    scanf("%d", &bit);

    if (num & (1 << bit)) {
        printf("TRUE\n");
    } else {
        printf("FALSE\n");
    }

    return 0;
}

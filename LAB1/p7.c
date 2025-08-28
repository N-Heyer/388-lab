#include <stdio.h>

int main() {
    int temp;
    int *temp_ptr;

    printf("Enter integer: ");
    scanf("%d", &temp);

    temp_ptr = &temp;

    // Outputs
    printf("%d\n", temp);
    printf("%d\n", *temp_ptr);
    printf("%p\n", (void*)&temp);
    printf("%p\n", (void*)temp_ptr);

    return 0;
}

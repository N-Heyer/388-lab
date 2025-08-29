#include <stdio.h>

int prime(int n) {
    if (n <= 1) return 0; // handle sep
    if (n == 2) return 1; // handle sep
    if (n % 2 == 0) return 0; // get rid of even num
    for (int i = 3; i * i <= n; i += 2) { // starts @ 3 and only checks odd num
        if (n % i == 0)
            return 0;
    }
    return 1; // if none found num is prime
}

int main() {
    int limit;
    printf("Enter a number: ");
    scanf("%d", &limit);

    for (int i = 2; i <= limit; i++) { // loop from 2 to the users " limit "
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

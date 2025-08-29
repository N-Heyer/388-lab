#include <stdio.h>

int main() {
    int num, bit, override; // num is the modified, bit is the position to change,
                            //override tells the program to set the bit (1) or clear the bit(0) 

    printf("Enter integer: ");
    scanf("%d", &num); // read num

    printf("Enter bit: ");
    scanf("%d", &bit); // read bit to change

    printf("Enter override: ");
    scanf("%d", &override); // read whether to set or to clear using 1 or 0

    if (override == 1) {
        // set the bit
        num |= (1 << bit); // creates a num w a 1 in the bit position we want and
    } else {               // 0's everywhere else
        // clear the bit
        num &= ~(1 << bit); // creates a mask w a 1 in the target position
    }                       // bitwise not (~) flips all bits = 0 in the target
                            // and 1 everywhere else
    printf("%d\n", num); // print num int value after modification

    return 0;
}

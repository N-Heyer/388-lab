#include <stdio.h>

int main() {
    int n;
    printf("How big is the array?\n");
    scanf("%d", &n);

    int arr[n]; // variable length array
    for (int i = 0; i < n; i++) {
        printf("Enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }

    int duplCount = 0; // keeps track of how many vals are dupl

    for (int i = 0; i < n; i++) { 
        int dupl = 0; // dupl set to 1 if dupl is found
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) { // if dupl is found dupl = 1
                dupl = 1;
                break;
            }
        }
        if (dupl) {
            // check if we already counted this element
            int alrCount = 0;
            for (int k = 0; k < i; k++) {
                if (arr[k] == arr[i]) {
                    alrCount = 1;
                    break;
                }
            }
            if (!alrCount)
                duplCount++;
        }
    }

    printf("%d\n", duplCount);
    return 0;
}

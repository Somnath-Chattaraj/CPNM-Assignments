#include <stdio.h>

int main() {
    int digits[] = {1, 2, 3};
    int size = sizeof(digits) / sizeof(digits[0]);

    printf("All combinations of digits 1, 2, and 3 are:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                printf("%d%d%d\n", digits[i], digits[j], digits[k]);
            }
        }
    }

    return 0;
}

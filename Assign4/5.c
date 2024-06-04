#include <stdio.h>

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    int (*ptr)[2] = arr;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d] = %d\n", i, j, (*ptr)[j]);
        }
        ptr++;
    }

    return 0;
}
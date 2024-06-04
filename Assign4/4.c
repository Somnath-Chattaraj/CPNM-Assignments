#include <stdio.h>

int main() {
    int arr[2][2][2][2] = {
        {
            {{1, 2}, {3, 4}},
            {{5, 6}, {7, 8}}
        },
        {
            {{9, 10}, {11, 12}},
            {{13, 14}, {15, 16}}
        }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    printf("arr[%d][%d][%d][%d] = %d\n", i, j, k, l, arr[i][j][k][l]);
                }
            }
        }
    }

    return 0;
}
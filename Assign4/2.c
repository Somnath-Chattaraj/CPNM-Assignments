#include <stdio.h>

int main() {
    printf("Enter rows and columns of matrix: ");
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    int matrix[rows][cols];
    printf("Enter elements of matrix: ");
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }
    if (count > ((rows * cols) / 2)) {
        printf("The given matrix is a sparse matrix.\n");
    } else {
        printf("The given matrix is not a sparse matrix.\n");
    }
    return 0;
}
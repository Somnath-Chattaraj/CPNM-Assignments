#include <stdio.h>

void copyArray(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++) {
        destination[i] = source[i];
    }
}

int main() {
    int arr1[5], arr2[5];
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    copyArray(arr1, arr2, 5);

    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nCopied array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
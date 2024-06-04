#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], count[n], arr2[n], index = 0;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        count[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        int counter = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                counter++;
                count[j] = 0;
            }
        }
        if (count[i] != 0) {
            count[i] = counter;
            arr2[index] = arr[i];
            index++;
        }
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            total++;
        }
    }
    printf("Total number of duplicate elements: %d\n", total);

    printf("Array in reverse order without duplicates: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
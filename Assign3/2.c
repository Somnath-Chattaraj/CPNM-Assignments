#include <stdio.h>

int main() {
    int arr[5], *ptr;
    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  // Point to the first element of the array

    printf("You entered: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
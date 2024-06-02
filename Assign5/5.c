#include <stdio.h>
#include <string.h>

void sortStrings(char arr[][100], int n) {
    char temp[100];

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char strings[5][100];

    printf("Enter five strings:\n");
    for (int i = 0; i < 5; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strlen(strings[i]) - 1] = '\0'; // Remove the newline character
    }

    sortStrings(strings, 5);

    printf("\nStrings in alphabetical order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

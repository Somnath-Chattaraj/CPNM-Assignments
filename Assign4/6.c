#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[count] != '\n' && str[count] != '\0') {
        count++;
    }

    printf("The string has %d characters.\n", count);

    return 0;
}
#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    while (str[i] != '\n' && str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            count++;
        }
        i++;
    }

    printf("The string has %d words.\n", count + 1);

    return 0;
}
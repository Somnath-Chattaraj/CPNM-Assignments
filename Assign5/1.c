#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* capitalizeWords(char* str) {
    int length = strlen(str);
    int i=0;
    str[0] = toupper(str[0]);
    for (i = 1; i < length; i++) {
        if (str[i] == ' ') {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    printf("Modified string: %s\n", str);
    // puts(str);
}

int main() {
    // char str[] = "hello world";
    // char* modifiedStr = capitalizeWords(str);
    // printf("Modified string: %s\n", modifiedStr);
    // free(modifiedStr); // Free the dynamically allocated memory
    // return 0;
    char str[100];
    printf("Enter a string: ");
    gets(str);
    capitalizeWords(str);
}

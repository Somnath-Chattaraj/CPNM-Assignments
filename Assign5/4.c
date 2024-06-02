#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 1000
#define MAX_WORDS 100

bool isWordInArray(char words[MAX_WORDS][MAX_LEN], int wordCount, char *word) {
    for (int i = 0; i < wordCount; i++) {
        if (strcmp(words[i], word) == 0) {
            return true;
        }
    }
    return false;
}

void removeDuplicateWords(char *input) {
    char words[MAX_WORDS][MAX_LEN];
    int wordCount = 0;

    char *token = strtok(input, " ");
    while (token != NULL) {
        if (!isWordInArray(words, wordCount, token)) {
            strcpy(words[wordCount], token);
            wordCount++;
        }
        token = strtok(NULL, " ");
    }

    for (int i = 0; i < wordCount; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%s", words[i]);
    }
    printf("\n");
}

int main() {
    char input[MAX_LEN];

    printf("Enter a string: ");
    fgets(input, MAX_LEN, stdin);

    // Remove trailing newline character if it exists
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    removeDuplicateWords(input);

    return 0;
}

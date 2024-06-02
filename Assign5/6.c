#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c) {
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    }
    return 0;
}

int countSuccessiveVowels(char *text) {
    int count = 0;
    int length = strlen(text);
    
    for (int i = 0; i < length - 1; i++) {
        if (isVowel(text[i]) && isVowel(text[i + 1])) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char text[100];
    
    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);
    
    int count = countSuccessiveVowels(text);
    
    printf("Number of occurrences of any two vowels in succession: %d\n", count);
    
    return 0;
}

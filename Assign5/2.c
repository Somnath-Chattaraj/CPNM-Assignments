#include <stdio.h>

int main() {
    char s[100];
    fgets(s, 100, stdin);
    int cnt = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t' && s[i] != '\0') {
            cnt++;
        } else {
            printf("%d ", cnt);
            cnt = 0;
        }

    }
    // printf("%d\n", cnt);
}
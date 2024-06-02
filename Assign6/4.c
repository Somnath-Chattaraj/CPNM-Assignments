#include <stdio.h>
#include <string.h>

void reverseStr(char* str) {
    int n = strlen(str);

    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}
void decimal2binary(int num) {

    char binary[32] = "";
    char temp[2];

    while (num > 0) {
        int rem = num % 2;
        sprintf(temp, "%d", rem);
        strcat(binary, temp);
        num /= 2;
    }

    reverseStr(binary);

    printf("The binary equivalent is : ");
    puts(binary);

}


int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    decimal2binary(num);
    return 0;
}
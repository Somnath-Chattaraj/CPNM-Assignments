#include <stdio.h>


void recurse(int i, int num, int factorial) {
    if (i>num) {
        printf("Fatorial : %d \n", factorial);
        return;
    }
    factorial *= i;
    i++;
    recurse(i, num, factorial);
}

int main () {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    recurse(1, num, 1);
    return 0;
}
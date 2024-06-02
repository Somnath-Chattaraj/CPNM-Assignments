#include <stdio.h>

void GCD(int a, int b) {
    if (b==0) {
        printf("GCD is : %d \n", a);
        return;
    }
    GCD(b%a, a);
}

int main() {
    int num1, num2;
    printf("Enter two number : ");
    scanf("%d %d", &num1 , &num2);
    GCD(num1, num2);
    return 0;
}
#include <stdio.h>
#include <math.h>

#include <stdio.h>

void checkPerfectNumber(int num) {
    int sum = 0;

    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    if(sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
}



void armstrong2(int num) {
    int originalNum, remainder, n = 0, result = 0, power;
    

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum%10;
        power = pow(remainder, n);
        result += power;
        originalNum /= 10;
    }

    if(result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    armstrong2(num);
    checkPerfectNumber(num);
    return 0;
}
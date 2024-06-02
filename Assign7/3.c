#include <stdio.h>
#include <math.h>

double func(double x) {
    return x*x*x - x*x + 2;
}

void regulaFalsi(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("Incorrect a and b\n");
        return;
    }

    double c = a;

    for (int i=0; i < 1000; i++) {
        c = (a*func(b) - b*func(a)) / (func(b) - func(a));

        if (func(c)==0)
            break;

        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    printf("The value of root is : %.6f\n", c);
}

int main() {
    double a , b;
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    regulaFalsi(a, b);
    return 0;
}
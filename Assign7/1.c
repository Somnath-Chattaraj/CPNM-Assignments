#include <stdio.h>
#include <math.h>

double func(double x) {
    return x*x*x - x*x + 2;
}

void bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        printf("Incorrect a and b\n");
        return;
    }

    double c = a;

    while ((b-a) >= 0.0001) {
        c = (a+b)/2;

        if (func(c) == 0.0)
            break;

        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;
    }
    printf("The value of root is : %.4f\n",c);
}

int main() {
    double a , b;
    scanf("%lf %lf", &a, &b);
    bisection(a, b);
    return 0;
}
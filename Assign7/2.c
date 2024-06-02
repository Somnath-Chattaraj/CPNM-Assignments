#include <stdio.h>
#include <math.h>

double func(double x) {
    return x*x*x - x*x + 2;
}

double derivFunc(double x) {
    return 3*x*x - 2*x;
}

void newtonRaphson(double x) {
    double h = func(x) / derivFunc(x);
    while (fabs(h) >= 0.000001) {
        h = func(x)/derivFunc(x);
        x = x - h;
    }

    printf("The value of the root is : %.6f\n", x);
}

int main() {
    double x0;
    printf("Enter initial guess: ");
    scanf("%lf", &x0);
    newtonRaphson(x0);
    return 0;
}
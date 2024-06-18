#include <stdio.h>
#include <math.h>

double f(double x) {
    return x*x*x + 8*x - 4;
}

double df(double x) {
    return 3*x*x + 8;
}

void newtonRaphson(double x0, double tol) {
    double h = f(x0) / df(x0);
    while (fabs(h) >= tol) {
        h = f(x0) / df(x0);
        x0 = x0 - h;
    }
    printf("The root is: %.6lf\n", x0);
}

int main() {
    double x0 = 0.5, tol = 0.000001;
    newtonRaphson(x0, tol);
    return 0;
}

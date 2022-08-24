#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

double abs_pow(double x, int n) {
    if (n == 0) return 1;
    if (x == 0) return 0;
    if (x == 1) return 1;
    double res = abs_pow(x, n/2);
    res = res*res;
    if (n % 2) return x * res;
    else return res;
}

double myPow(double x, int n) {
    double res;
    if (n != INT_MIN) {
        res = abs_pow(x, abs(n));
    } else {
        res = abs_pow(x, INT_MAX);
        res *= x;
    }
    if (n >= 0) return res;
    else return 1 / res;
}

int main() {
    printf("%f", myPow(2.00000, 10));
    return 0;
}
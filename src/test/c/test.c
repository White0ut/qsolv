#include "../../qsolv.h"
#include <stdio.h>

int main(int *argc, char **argv) {
    double x1, x2;

    int res = solv((double)1, (double)1, (double)1, &x1, &x2);

    printf("return code: %d, a: 1, b: 1, c: 1\n\tx1: %f, x2: %f\n", res, x1, x2);
    return 0;
}
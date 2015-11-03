#include "../../qsolv.h"
#include <stdio.h>
#include <assert.h>
// #include "cunit.h"

int main(int *argc, char **argv) {
    double a,b,c,x1, x2;

    a = 2;
    b = 2;
    c = 0;

    int ret = solv(a,b,c, &x1, &x2);

    // assert_eq("ret",x1,0);

    printf("return code: %d, a: 1, b: 1, c: 1\n\tx1: %f, x2: %f\n", ret, x1, x2);
    return 0;
}
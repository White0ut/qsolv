#include "../../qsolv.h"
#include <stdio.h>
#include <assert.h>



#define assert_eql(str,a,b) { \
  if( a != b ) { \
    printf("ERROR LINE %d: %s, %lf !== %lf\n", \
              __LINE__ , str ,  a , b ); \
  } \
}

#include "cunit.h"

int main(int *argc, char **argv) {
    double a,b,c,x1, x2;

    a = 2;
    b = 2;
    c = 0;

    int ret = solv(a,b,c, &x1, &x2);

    // assert(x1 == 0.9);
    assert_eql("ret",x1,0.1);

    // printf("return code: %d, a: 1, b: 1, c: 1\n\tx1: %f, x2: %f\n", ret, x1, x2);
    return 0;
}
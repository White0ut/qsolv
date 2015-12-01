#include "sqrtmock.h"
/**
* solv
*
* input variables: a, b ,c
* output variables: x1, x2
*
* return:
*   0 - success
*   2 - unsupported input
*   3 - not a number input
*   4 - Infinity input
*/

double qsolv(double a, double b, double c, double *x1, double *x2)
{

    *x1 = (-b + getSqrt(b * b - 4 * a * c)) / (2 * a);
    *x2 = (-b - getSqrt(b * b - 4 * a * c)) / (2 * a);

    if (isinf(-b + getSqrt(b * b - 4 * a * c)) || isinf(-b - getSqrt(b * b - 4 * a * c))) return 4.0;
    if (isnan(a) || isnan (b) || isnan(c) ) return 3.0;
    if (b*b < 4*a*c) return 2.0; 
    return 0;
}


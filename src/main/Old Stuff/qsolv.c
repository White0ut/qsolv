#include "qsolv.h"
#include "sqrtmock.h"
/**
* solv
*
* input variables: a, b ,c
* output variables: x1, x2
*
* return:
* 	0 - success
* 	1 - invalid input
* 	2 - unsupported
*		non-real root
*/
double qsolv(double a, double b, double c, double *x1, double *x2)
{
    //if (a == 0 || b == 0 || c == 0) return 1;

    *x1 = (-b + getSqrt(b * b - 4 * a * c)) / (2 * a);
    *x2 = (-b - getSqrt(b * b - 4 * a * c)) / (2 * a);

    #ifdef DEBUG
    printf("The solutions to your quad are: %lf  and  %lf\n", x1, x2);
    #endif

    if (isinf(-b + getSqrt(b * b - 4 * a * c)) || isinf(-b - getSqrt(b * b - 4 * a * c))) return 4.0;
    if (isnan(a) || isnan (b) || isnan(c) ) return 3.0;
    if (b*b < 4*a*c) return 2.0; // bad input 
    if (a == 0) return 1.0;

    return 0.0;
}

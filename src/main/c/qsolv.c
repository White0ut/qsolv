#include "../../qsolv.h"
#include <stdio.h>
#include <math.h>
// #include <cunit.h> 

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
int solv(double a, double b, double c, double *x1, double *x2)
{
    // if (a == 0 || b == 0 || c == 0) return 1;
    if (b*b < 4*a*c) return 2; // bad input 
    if (a == 0) return 1;

    *x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    *x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    #ifdef DEBUG
    printf("The solutions to your quad are: %lf  and  %lf\n", x1, x2);
    #endif

    return 0;
}

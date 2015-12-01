#include <stdio.h>
#include <stdlib.h>
// #include "QSOLVE.h"
#include "roots.h"
void qsolv(double a, double b, double c, double *x1, double *x2);
double promptUser()
{
    double a,b,c,ret;
    double *x1 = malloc (sizeof(double));
    double *x2 = malloc (sizeof(double));

    printf("Hi, Please input a, b, c double size cofficents of a qudratic equation\n");
    printf("Input a:");
    scanf("%lf",&a);
    printf("Input b:");
    scanf("%lf",&b);
    printf("Input c:");
    scanf("%lf",&c);
    qsolv(a,b,c,x1,x2);

    setRoot1(x1);
    setRoot2(x2);

    return 0;
}
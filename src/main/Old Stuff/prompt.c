#include <stdio.h>
#include <stdlib.h>
#include "roots.h"
void qsolv(double a, double b, double c, double *x1, double *x2);
double promptUser()
{
    double a,b,c,ret;
    double *x1 = malloc (sizeof(double));
    double *x2 = malloc (sizeof(double));

    printf("Hi, Please input a,b,c double size cofficents of a qudratic equation in the format (a,b,c)\n");
    fscanf(stdin,"%lf,%lf,%lf",&a, &b, &c);
    // printf("Input a:");
    // fscanf(stdin,"%lf",&a);
    // printf("Input b:");
    // fscanf(stdin,"%lf",&b);
    // printf("Input c:");
    // fscanf(stdin,"%lf",&c);

    // printf("a is %lf\n b is %lf\n c is %lf\n",a,b,c);
    qsolv(a,b,c,x1,x2);

    setRoot1(x1);
    setRoot2(x2);
    return 0;
}
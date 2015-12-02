#include "qsolv.h"
#include "sqrtmock.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
* solv
*
* input variables: a, b ,c
* output variables: x1, x2
*
* return:
* 	0 - success
* 	2 - unsupported input
*	3 - not a number input
*   4 - Infinity input
*/
double promptUser();
double Sqrt(double value);
double qsolv(double a, double b, double c, double *x1, double *x2);
void setRoot1(double * ptr);
double * getRoot1();
void setRoot2(double * ptr);
double * getRoot2();

double *root1;
double *root2;

int main(int argc, char const *argv[])
{
   int promptUserReturn, qsolveReturn, SqrtReturn;
   promptUserReturn = promptUser();
   printf("The 2 roots are:%lf and %lf\n",*(getRoot1()), *(getRoot2())); 
    return 0;
}

double promptUser()
{
    double a,b,c;
    double * x1 = malloc (sizeof(double));
    double *x2 = malloc (sizeof(double));

    printf("Hi, Please input a, b, c double size cofficents of a qudratic equation\n");
    printf("Input a:");
    scanf("%lf",&a);
    printf("Input b:");
    scanf("%lf",&b);
    printf("Input c:");
    scanf("%lf",&c);
    qsolv(a,b,c,x1, x2);

    setRoot1(x1);
    setRoot2(x2);

    return 0;
}
void setRoot1(double * ptr)
{
    root1 = malloc (sizeof(double));
    root1 = ptr;
}
double * getRoot1()
{
    return root1;
}
void setRoot2(double * ptr)
{
    root2 = malloc (sizeof(double));
    root2 = ptr;
}
double * getRoot2()
{
    return root2;
}

double qsolv(double a, double b, double c, double *x1, double *x2)
{

    *x1 = (-b + getSqrt(b * b - 4 * a * c)) / (2 * a);
    *x2 = (-b - getSqrt(b * b - 4 * a * c)) / (2 * a);

    if (isinf(-b + getSqrt(b * b - 4 * a * c)) || isinf(-b - getSqrt(b * b - 4 * a * c))) return 4.0;
    if (isnan(a) || isnan (b) || isnan(c) ) return 3.0;
    if (b*b < 4*a*c) return 2.0; 
    return 0;
}


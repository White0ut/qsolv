#include <stdlib.h>

double *root1;
double *root2;

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
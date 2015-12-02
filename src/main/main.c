#include <stdio.h>
#include <stdlib.h>
#include "roots.h"

int main(int argc, char const *argv[])
{
   int promptUserReturn, qsolveReturn, SqrtReturn;
    double a,b,c,ret;
    double *x1 = malloc (sizeof(double));
    double *x2 = malloc (sizeof(double));
    char *line = malloc (10 * sizeof(char));

    printf("Hi, Please input a,b,c double size cofficents of a qudratic equation in the format (a,b,c)\n");

    line = "dummyline";
    while(strncmp("exit", line, 4))
    {
    	fscanf(stdin,"%lf,%lf,%lf",&a, &b, &c);
    	qsolv(a,b,c,x1,x2);

    	setRoot1(x1);
    	setRoot2(x2);

    	printf("The 2 roots are:%lf and %lf\n",*(getRoot1()), *(getRoot2()));

    	printf("enter a,b,c again or type exit to end\n");
    	line = malloc (10 * sizeof(char));
    	fgets(line, 10, stdin);
    } 

    printf("...Exiting QuadSolver Application\n");
   return 0;
}
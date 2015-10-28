#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{


	double a = 0,b=0,c=0;

	printf("input a\n");
	scanf("%lf", &a);

	printf("input b\n");
	scanf("%lf", &b);

	printf("input c\n");
	scanf("%lf", &c);

	double sol1;
	double sol2;

	 sol1 = (-b + sqrt(b*b-4*a*c))/(2*a);
	 sol2 = (-b - sqrt(b*b-4*a*c))/(2*a);

	printf("The solutions to your quad are: %lf  and  %lf\n", sol1, sol2);

	return 0;
}

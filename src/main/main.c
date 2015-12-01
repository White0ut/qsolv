#include <stdio.h>
#include "prompt.h"
#include "roots.h"

int main(int argc, char const *argv[])
{
   int promptUserReturn, qsolveReturn, SqrtReturn;
   promptUserReturn = promptUser();
   printf("The 2 roots are:%lf and %lf\n",*(getRoot1()), *(getRoot2())); 
   return 0;
}
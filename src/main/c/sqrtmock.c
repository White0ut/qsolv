//#include <math.h>

static double Sqrt;
static double Sent;

void setSqrt(double ans){
Sqrt = ans;
}

double getSqrt(double sent){
Sent = sent;
return Sqrt;
}

double getSent(){
return Sent;
}


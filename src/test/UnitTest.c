#include "../main/qsolv.h"
#include "../main/sqrtmock.h"
//#include <stdio.h>
//#include <assert.h>


// Assert to check if values are exactly equal
#define assert_eql(str,a,b) { \
  if( a != b ) { \
    printf("ERROR LINE %d: %s, %f != %f\n", \
              __LINE__ , str ,  a , b ); \
  } \
}
// Assert to check floating point values are equal after being machine rounding
#define assert_eqld(str,a,b) { \
  if( a - b > 0 ) { \
    printf("ERROR LINE %d: %s, %f != %f\n", \
              __LINE__ , str ,  a , b ); \
  } \
}
// Assert to check to see if the value is not a number
#define assert_nan(str,a) { \
  if(!isnan(a)) { \
    printf("ERROR LINE %d: %s, %f != nan\n", \
              __LINE__ , str ,  a); \
  } \
}
// Assert to check to see if the value is infinity
#define assert_inf(str,a) { \
  if(!isinf(a)) { \
    printf("ERROR LINE %d: %s, %f != inf\n", \
              __LINE__ , str ,  a); \
  } \
}

int main(int *argc, char **argv) {
    double a,b,c,x1, x2;
    double ret;
    double sent;

    //Base case
    a = 2.0;
    b = 2.0;
    c = 0.0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eql("x2",x2,-1.0);
    assert_eql("x1",x1,0.0);

    // Debug
    //printf("the sqrt mock object was sent: %f\n", sent);
	//printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	//Base case
    a = 4.0;
    b = -1.0;
    c = -3.0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eql("x1",x1,1.0);
    assert_eql("x2",x2,-0.75);

	//Base case
    a = 4.0;
    b = 5.0;
    c = 1.0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eql("x1",x1,-0.25);
    assert_eql("x2",x2,-1.0);
	

	// //Zero case
    a = 4;
    b = 2;
    c = 0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eql("x1",x1,0.0);
    assert_eql("x2",x2,-.5);


    // //Zero case
    a = 0;
    b = 0;
    c = 0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_nan("x1",x1);
    assert_nan("x2",x2);
	

	//Zero case
	a = 8;
    b = 2;
    c = 0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eql("x1",x1,0.0);
    assert_eql("x2",x2,-0.25);
	

	//floating point case
	a = 2.5;
    b = 4;
    c = -3;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eqld("x1",x1,0.6081824);
    assert_eqld("x2",x2, -1.2331824);
	

	//floating point case
	a = 1.5;
    b = 4;
    c = 2;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eqld("x1",x1,-0.66666666);
    assert_eql("x2",x2, -2.0);
	

	//floating point case
	a = -4.5;
    b = 4.3;
    c = 7.8;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eqld("x1",x1,-0.922795297);
    assert_eqld("x2",x2, 1.878351);
	

	//floating point case
	a = -2;
    b = 5.2;
    c = -2;
	setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eqld("x1",x1, 0.469338);
    assert_eqld("x2",x2, 2.1306624);
	

	//floating point case
	a = 2.2;
    b = -3.2;
    c = 0;
	setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_eqld("x1",x1, 1.4545455);
    assert_eql("x2",x2, 0.0);
	

	// //nan case
	a = sqrt (-1);
    b = 2;
    c = 0;
	setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,3.0);
    assert_nan("sent",sent);
    assert_nan("x1", x1);
    assert_nan("x2", x2);


   // //nan case
	a = sqrt (-1);
    b = sqrt (-1);
    c = sqrt (-1);
	setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,3.0);
    assert_nan("sent",sent);
    assert_nan("x1", x1);
    assert_nan("x2", x2);
	

	//nan case
	a = 9;
    b = 32;
    c = 62;
	setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,2.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_nan("x1", x1);
    assert_nan("x2", x2);
	

	//nan case
	a = 4;
    b = 3;
    c = 6;
	setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,2.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_nan("x1", x1);
    assert_nan("x2", x2);
	

	//nan case
	a = 2;
    b = sqrt (-1);
    c = 0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret, 3.0);
    assert_nan("sent",sent);
    assert_nan("x1", x1);
    assert_nan("x2", x2);
	

	//infinity case
	a = 2;
    b = INFINITY;
    c = 0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,4.0);
    assert_eql("sent",sent,b * b - 4 * a * c);
    assert_nan("x1", x1);
    assert_inf("x2", x2);
	


	//infinity case
	a = INFINITY;
    b = INFINITY;
    c = 0;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_nan("sent",sent);
    assert_nan("x1", x1);
    assert_nan("x2", x2);
	

	//infinity case
	a = 23;
    b = 23;
    c = INFINITY;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,2.0);
    assert_inf("sent",sent);
    assert_nan("x1", x1);
    assert_nan("x2", x2);


    //infinity case
	a = INFINITY;
    b = INFINITY;
    c = INFINITY;
    setSqrt(sqrt(b * b - 4 * a * c)); //Send the mock object the sqrt
    ret = qsolv(a,b,c, &x1, &x2);	//Call qqsolve 
    sent = getSent(); // Get the value sent to the mock object
    assert_eql("ret",ret,0.0);
    assert_nan("sent",sent);
    assert_nan("x1", x1);
    assert_nan("x2", x2);
	

    return 0;
}
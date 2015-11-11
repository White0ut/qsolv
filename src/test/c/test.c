#include "../../main/c/qsolv.h"
#include "../../main/c/sqrtmock.h"
//#include <stdio.h>
//#include <assert.h>



#define assert_eql(str,a,b) { \
  if( a != b ) { \
    printf("ERROR LINE %d: %s, %lf !== %lf\n", \
              __LINE__ , str ,  a , b ); \
  } \
}
#define assert_nan(str,a) { \
  if(!isnan(a)) { \
    printf("ERROR LINE %d: %s, %lf !== nan\n", \
              __LINE__ , str ,  a); \
  } \
}
#define assert_inf(str,a) { \
  if(!isinf(a)) { \
    printf("ERROR LINE %d: %s, %lf !== inf\n", \
              __LINE__ , str ,  a); \
  } \
}

int main(int *argc, char **argv) {
    double a,b,c,x1, x2;
    int ret;
    double sent;

    //Base case
    setSqrt(2.0);
    a = 2.0;
    b = 2.0;
    c = 0.0;
    ret = solv(a,b,c, &x1, &x2);

    sent = getSent();
    printf("the sqrt mock object was sent: %f\n", sent);
    assert_eql("ret",x1,0.0);
    assert_eql("ret",x2,-1.0);
	printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	//Base case
 //    a = 4;
 //    setSqrt(2.0);
 //    b = -1;
 //    c = -3;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1,1);
 //    assert_eql("ret",x2,-0.75);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //Base case
 //    a = 4;
 //    b = 5;
 //    c = 1;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1,-0.25);
 //    assert_eql("ret",x2,-1.00002);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //Zero case
 //    a = 4;
 //    b = 2;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1,0.00000001);
 //    assert_eql("ret",x2,-.05);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //Zero case
	// a = 9999999;
 //    b = 2;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1,0.0);
 //    assert_eql("ret",x2,0.0);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //floating point case
	// a = 2.1;
 //    b = 4;
 //    c = -3;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1,0.575886);
 //    assert_eql("ret",x2, -2.480648);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //floating point case
	// a = 1.5;
 //    b = 4;
 //    c = 2;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1,-0.6666666);
 //    assert_eql("ret",x2, -2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //floating point case
	// a = -4.5;
 //    b = 4.3;
 //    c = 7.8;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1,-0.922795297);
 //    assert_eql("ret",x2, 1.878350);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //floating point case
	// a = 4;
 //    b = 5;
 //    c = -3;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1, 0.4430004);
 //    assert_eql("ret",x2, -1.693000);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //floating point case
	// a = 2.2;
 //    b = -3.2;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",x1, 1.45454545);
 //    assert_eql("ret",x2, 0.0);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //nan case
	// a = sqrt (-1);
 //    b = 2;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_nan("ret", x1);
 //    assert_nan("ret", x2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //nan case
	// a = 9;
 //    b = 32;
 //    c = 62;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_nan("ret", x1);
 //    assert_nan("ret", x2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //nan case
	// a = 4;
 //    b = 3;
 //    c = 6;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_nan("ret", x1);
 //    assert_nan("ret", x2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //nan case
	// a = 2;
 //    b = sqrt (-1);
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_nan("ret", x1);
 //    assert_nan("ret", x2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //infinity case
	// a = 2;
 //    b = INFINITY;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_inf("ret", x1);
 //    assert_inf("ret", x2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);


	// //infinity case
	// a = INFINITY;
 //    b = INFINITY;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_inf("ret", x1);
 //    assert_inf("ret", x2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //infinity case
	// a = 23;
 //    b = 23;
 //    c = INFINITY;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_inf("ret", x1);
 //    assert_inf("ret", x2);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //check return value case
	// a = 2;
 //    b = 6;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",ret,0.0);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //check return value case
	// a = 0;
 //    b = 6;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",ret,1.0);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);

	// //check return value case
	// a = 0;
 //    b = 6;
 //    c = 0;
 //    ret = solv(a,b,c, &x1, &x2);
 //    assert_eql("ret",ret,1.0);
	// printf("return code:%d, a: %f, b:%f, c:%f\n\tx1: %f, x2: %f\n\n", ret, a, b, c, x1, x2);



    return 0;
}
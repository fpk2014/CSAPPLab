#ifndef _INTEGEROPERATE
#define _INTEGEROPERATE 1
#endif
#include "head.h"

//tmin()	返回最小的32位补码
int tmin();
int isTmin(int x);

//tmax()	最大的32位补码
int tmax();
//isTmax(x)	x 是最大的 32 位补码吗
int isTmax(int x);

//negate(x)	不用负号得到 -x
int negate(int x);

void test_integerOperate();

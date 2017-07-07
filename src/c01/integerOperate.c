#include "integerOperate.h"

//tmin()	返回最小的32位补码
int tmin(){
    return  ~0<<31; // -(unsigned int)~0>>1;
}

int isTmin(int x){
    return !(x<<1)&!!(x);
}

//tmax()	最大的32位补码
int tmax(){
    return (1<<31)-1;
}

//isTmax(x)	x 是最大的 32 位补码吗
int isTmax(x){
    return isTmin(x+1);
}

//negate(x)	不用负号得到 -x
int negate(x){
    return ~x+1;
}

void test_integerOperate(){
    printf("tmin()=%d\n", tmin());
    printf("isTmin(%d)=%d\n", tmin(), isTmin(tmin()));
    printf("tmax()=%d\n", tmax());
    printf("isTmax(%d)=%d\n", tmax(), isTmax(tmax()));
    printf("negate(2)=%d\n", negate(2));
}

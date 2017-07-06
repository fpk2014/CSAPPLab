#ifndef _BITXOR
#define _BITXOR 1
#endif

#include "bitXor.h"

/*
 * 只用 & 和 ~ 实现 x^y
 * x^y = (x&!y) | (x&!y)
 * x|y = !(!x & !y)
 *
 */

INT or(int x, int y){
    return ~(~x & ~y);
}

int bitXor(int x, int y){
    return or(x&~y, ~x&y);
}

void test_bitXor(){
    printf("bitXor(0, 0) = %d\n", bitXor(0, 0));
    printf("bitXor(0, 1) = %d\n", bitXor(0, 1));
    printf("bitXor(1, 0) = %d\n", bitXor(1, 0));
    printf("bitXor(1, 1) = %d\n", bitXor(1, 1));
}

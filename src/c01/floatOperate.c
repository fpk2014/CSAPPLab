#include "floatOperate.h"

float float_twice(float uf){

}

//计算 (int) f
/* 题目要求：Return bit-level equivalent of expression
 *  (int) f for floating point argument f. Argument
 * is passed as unsigned int, but it is to be
 * interpreted as the bit-level representation of a
 * single-precision floating point value. Anything
 * out of range (including NaN and infinity) should
 * return 0x80000000u.
 * 允许操作：Any integer/unsigned operations
 *         incl. ||, &&. also if, while
 *
 */

int float_f2i(unsigned uf){
    int sign = uf & 0x80000000;
    int exp  = (uf>>23) & 0xFF;
    int frac = uf & 0x007FFFFF;

    int bias = exp-127;

    /*
    if (exp == 255 || bias > 30) {
      // exponent is 255 (NaN), or number is too large for an int
      return 0x80000000u;
    } else if (!exp || bias < 0) {
      // number is very small, round down to 0
      return 0;
    }
    */

    // append a 1 to the front to normalize
    frac = frac | 1<<23;
    if(bias>23){
        frac = frac<<(bias-23);
    }else{
        frac = frac>>(23-bias);
    }

    if(sign){
        //大于0
        frac = ~(frac) + 1;
    }
    return frac;
}

void test_floatOperate(){
    printf("float_f2i(2.1) is  %d\n", float_f2i(2.1));
}

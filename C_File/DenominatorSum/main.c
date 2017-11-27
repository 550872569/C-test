//
//  main.c
//  DenominatorSum
//
//  Created by Yan on 2017/11/13.
//  Copyright © 2017年 YY. All rights reserved.
//

#include <stdio.h>

void denominatorSum() {
    const int max = 101;
    int sign = 1,deno,i = 0;
    float sum = 0.0f,term = 0.0f;
    while (i<max) {
        deno = i+1;//分母
        if (deno % 2 == 0) {
            sign = -1; // + —
        } else {
            sign = 1; // + —
        }
        term = sign *(1/deno);
        sum = term + sum;
        printf("i=%d,term = %.2f sum = %.2f\n",i,term,sum);
        i++;
    }
}
int main(int argc, const char * argv[]) {
    denominatorSum();
    return 0;
}

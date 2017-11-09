//
//  main.c
//  Year_Run
//
//  Created by Yan on 2017/11/9.
//  Copyright © 2017年 YY. All rights reserved.
//

#include <stdio.h>

//判断2000～2050之间的闰年
void runYear() {
    int year = 2000;
    while (year<=2500) {
        if (year%4==0 && year%100!=0) {
            printf("闰年year -- %d\n",year);
        } else if (year%400==0){
            printf("闰年year -- %d\n",year);
        }
        year ++;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    runYear();
    return 0;
}


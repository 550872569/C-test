//
//  main.c
//  TwoDimensionalArray
//
//  Created by Yan on 2017/11/28.
//  Copyright © 2017年 YY. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    getMaxValue();
    return 0;
}
int getMaxValue() {
    int a[3][5] = {{1,2,3,4,5},{8,9,12,12,13},{7,5,62,18,99}};
    int maxValue = a[0][0];
    int clumn = 0;
    int row = 0;
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<5; j++) {
            if (a[i][j] > maxValue) {
                maxValue = a[i][j];
                clumn = i;
                row = j;
            }
            printf("%d ",a[i][j]);
        }
    }
    printf("\n二维数组中最大值为%d line-%d clumn-%d\n",maxValue,row,clumn);
    return 0;
}

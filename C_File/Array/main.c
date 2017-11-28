//
//  main.c
//  Array
//
//  Created by Yan on 2017/11/28.
//  Copyright © 2017年 YY. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    arraySort();
    return 0;
}
int arraySort() {
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][2];
    printf("a\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<3; j++) {
            printf("%d ",a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    printf("\n");
    printf("b\n");
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<2; j++) {
            printf("%d ",b[i][j]);
        }
    }
    printf("\n");

    return 0;
}

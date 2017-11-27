//
//  main.c
//  BubbleSort
//
//  Created by Yan on 2017/11/27.
//  Copyright © 2017年 YY. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("%d\n",bubbleSortCode());
    return 0;
}

int bubbleSortCode() {
    printf(" please use keyboard input ten numbers int type\n");
    int a[10];
    int i,j,t;
    for (int s=0; s<10; s++) {
        scanf("%d",&a[s]);
    }
    for (int s=0; s<10; s++) {
        printf("%d ",a[s]);
    }
    printf("\n");
    for (i = 0; i<10; i++) {
        for (j = 0; j<10-i; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for (int s = 0; s < 10; s ++) {
        printf("%d ",a[s]);
    }
    return 0;
}

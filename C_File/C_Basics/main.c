//
//  main.c
//  yanhangpu
//
//  Created by Yan on 2017/11/5.
//  Copyright © 2017年 YY. All rights reserved.
//

#include <stdio.h>

//求两个数字的最大公约数
int findCommonDivisorFromInput () {
    int a,b,min;
    scanf("%d,%d",&a,&b);
    min = a<b?a:b;
    while (min>0) {
        if (a%min==0&&b%min==0) {
            break;
        }
        min--;
    }
    return min;
}


//判断一个整数能否同时被3和5整除
void isCanDivideInputNumber() {
    int a = 0;
    int i = 0;
    while (i < 100) {
        scanf("%d",&a);
        if (a%3==0 && a%5==0) {
            printf("您输入的整数a=%d同时被3和5整除\n",a);
        } else {
            printf("您输入的整数a=%d不能同时被3和5整除\n",a);
        }
        i++;
        if (a == 10086) {
            break;
        }
    }
}
// 1+2+3+4+...+n = ?
int sum(int n) {
    int result = n*(n+1)*0.5;
    return result;
}

/*  找出 n 个数字中最大的一个 */
void findMaxFromInputTenNumber () {
    int a,i,max;
    printf("plsase input 10 int type number\n");
    max = 0;
    i = 0;
    const int inputCount = 3;
    while (i<inputCount) {
        scanf("%d",&a);
        if (max<a) {
            max = a;
        } else {
            max = max;
        }
        i++;
    }
    printf("Max = %d\n",max);
}
/* 输入三个整形数 输入最大的一个 */
void findMaxNumber () {
    int a,b,c,max;
    printf("plsase input a b c number int type use keyboard\n");
    scanf("a=%d,b=%d,c=%d",&a,&b,&c);
    max = a;
    if (max<b) {
        max = b;
    }
    if (max<c) {
        max = c;
    }
    printf("Max = %d\n",max);
}
/* 输出空格用于绘制空格 */
int pringtfStringSpace () {
    printf("  ");
    return 0;
}
/* 交换输入的两个整形数 */
void exchange () {
    printf("please input a b\n");
    int a,b;
    scanf("a=%d,b=%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    int z = a;
    a = b;
    b = z;
    printf("a=%d,b=%d\n",a,b);
}
/* 绘制矩阵 */
int stringOut() {
    char m[5] = "*****";
    for (int idx=0; idx<4; idx++) {
        printf("%s",m);
        printf("\n\n");
        for (int i = 0; i < idx+1; i++) {
            pringtfStringSpace();
        }
    }
    return 0;
}
/* 比较参数 a b 两个整形数字输出大的 */
int max (int a,int b) {
    if (a>b) {
        return a;
    } else {
        return b;
    }
}
/* 键盘输入 a b 两个整形数字输出大的 */
void printfMax() {
    int a,b,z;
    printf("请输入两个整形数字a b\n");
    scanf("a=%d,b=%d",&a,&b);
    z = max(a, b);
    printf("%d\n",z);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("This is C Progrma.\n");
    int result = findCommonDivisorFromInput();
    printf("最大公约数是%d",result);
    return 0;
}



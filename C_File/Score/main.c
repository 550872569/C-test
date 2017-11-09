//
//  main.c
//  Score
//
//  Created by Yan on 2017/11/9.
//  Copyright © 2017年 YY. All rights reserved.
//

#include <stdio.h>
#include<time.h>
#include<stdlib.h>


// 求正整数1～n 的阶乘
int factorial(int max) {
    int p = 1,i = 2;
    while (i <= max) {
        p = i*p;
        i++;
    }
    return p;
}

// 输入50 个学生的成绩 g表示成绩 n 表示学号 如果成绩　>= 80 则输出学号和成绩
void findScore() {
    int score[50];//初始化一个存放五十个整数的数组
    srand((unsigned)(time(NULL)));//时间做种子
    for (int i = 0; i < 50; i++) {
        score[i] = rand()%40+60;//创建50个随机数60～100之间
    }
    int n=0;//g为成绩 n表示学号
    printf("请输入学生成绩g=?,n=?\n");
    while (n<50) {
        if (score[n]>=80) {
            printf("\n您输入学生成绩大于80分 成绩为%d,学号为%d \n",score[n],n);
        }
        n++;
    }
}

// 输入50 个学生的成绩 g表示成绩 n 表示学号 如果成绩　>= 80 则输出学号和成绩
void findScoreMoreThan80() {
    int g,n=0;//g为成绩 n表示学号
    printf("请输入学生成绩g=?,n=?\n");
    while (n<50) {
        scanf("%d",&g);
        if (g>=80) {
            printf("\n您输入学生成绩大于80分 成绩为%d,学号为%d \n",g,n);
        }
        n++;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    findScore();
    return 0;
}



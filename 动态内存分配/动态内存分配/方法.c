//
//  方法.c
//  动态内存分配
//
//  Created by Huahui Liang on 2022/6/18.
//

#include "方法.h"
#include <stdlib.h>

/**
 创建动态数组
 */
int * create_arr(int num)
{
    int *p = NULL;
    if (num != 0)
    {
        p = (int *)malloc(sizeof(int) * num);
    }
    return p;
}
/**
 用户键盘输入
 */
void user_input(int *p, int len)
{
    int num;
    for(int i = 0; i <len; i++)
    {
        printf("please enter a integer number: ");
        scanf("%d",&num);
        *(p+i) = num;
    }
}

/**
 打印输出
 */
void print_arr(int *p, int len)
{
    if (p != NULL)
    {
        printf("当前动态数组里面的数字有：");
        for (int i = 0; i < len; i++)
        {
            printf("%d ", *(p+i));
        }
        printf("\n");
    }
}

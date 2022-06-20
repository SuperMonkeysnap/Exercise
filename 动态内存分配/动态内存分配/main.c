//
//  main.c
//  动态内存分配
//
//  Created by Huahui Liang on 2022/6/18.
//

#include "main.h"
#include "方法.h"

int main ()
{
    int len;
    int *p;
    /**
     用户键盘输入，查看他们需要输入几个数字
     */
    printf("请问您需要输入几个数字 ?\n");
    scanf("%d",&len);
    /**
     通过这个输入，创建一个动态数组 调用函数create—arr
     */
    p = create_arr(len);
    /**
     用户键盘输入，填充该动态数组
     */
    user_input(p, len);
    /**
     打印输出该动态数组里面的值
     */
    print_arr(p, len);
    /**
     释放内存
     */
    free(p);
    
    return 0;
}

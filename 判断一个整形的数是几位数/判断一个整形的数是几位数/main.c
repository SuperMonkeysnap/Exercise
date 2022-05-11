//
//  main.c
//  判断一个整形的数是几位数
//
//  Created by Haris L on 2022/5/11.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num;
    int i = 1;
    //user input
    printf("please enter a integer number.");
    scanf("%d",&num);
    //judge
    while (num > 1)
    {
        num = num/10.0;
        i++;
    }
    //print
    printf("The digits of this number = %d\n",i);
    
    return 0;
}

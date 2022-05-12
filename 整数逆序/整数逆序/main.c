//
//  main.c
//  整数逆序


#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int userInput;
    int i;
    int num = 0;
    //userinput
    printf("Enter a integer number.");
    scanf("%d",&userInput);
    //work
    while (userInput > 0)
    {
        i = userInput % 10;         //取出最左边那一位数
        num = num * 10 +i;          //赋值给num
        userInput = userInput / 10; //修改userinput做下次循环
    }
    //print
    printf("%d\n",num);
    
    return 0;
}

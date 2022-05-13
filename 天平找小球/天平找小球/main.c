/*
 输入在一行中给出3个正整数，顺序对应球A、B、C的重量。
 在一行中输出唯一的那个不一样的球。
 */
#include <stdio.h>

void compare(int a,int b,int c);

int main(int argc, const char * argv[]) {
    
    int a,b,c;
    
    printf("please enter the weight of balls A,B,C: ");
    scanf("%d %d %d",&a,&b,&c);
    
    compare(a, b, c);
    
    return 0;
}

void compare(int a,int b,int c)
{
    if (b == c )
    {
        printf("The different ball is 'a'.\n");
    }else if(a == c )
    {
        printf("The different ball is 'b'.\n");
    }else
        printf("The different ball is 'c'.\n");
    
}

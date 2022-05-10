/**
 用户输入两个时间点 该程序计算两个时间点的差
 */
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int hour1, minute1;
    int hour2, minute2;
    int a;
    
    printf("input hour and minute: ");
    scanf("%d %d",&hour1,&minute1);
    printf("enter another hour and minute: ");
    scanf("%d %d",&hour2,&minute2);
    
    a = ((hour1 * 60 + minute1)-(hour2 * 60 + minute2));
    
    
    printf("%d hour %d minute\n", a/60 , a%60 );
    
    return 0;
}

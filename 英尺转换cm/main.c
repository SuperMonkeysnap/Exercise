#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    /*
        英尺转换cm
     */
    int foot; //英尺
    float inch; //英寸
    
    printf("请分别输入您的英尺和英寸 ：");
    scanf("%d %f",&foot,&inch);
    
    printf("您的身高是 %.2f cm\n",((foot + (inch/12)) * 0.3048) * 100);
    
    return 0;
}

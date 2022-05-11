/**
 输入两个整数 该程序输出两个整数的平均数
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1;
    int num2;
    double mean;
    
    printf("please enter two integer numbers.");
    scanf("%d %d", &num1,&num2);
    mean = (num1 + num2)/2.0;
    
    printf("The mean value = %.2f\n",mean);
    
}

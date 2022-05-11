/**
 用户可以输入无数个整数，该程序会计算出平均数
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num = 0;
    int sum = 0;
    int count = 0;
    int mean_value = 0;
    //user input
    while (num != -1)
    {
        printf("Enter a integer number. (enter -1)exit.");
        scanf("%d",&num);
        if (num == -1)
        {
            break;
        }
        count++;
        sum = sum + num;
    }
    //calculate
    mean_value = sum/count;
    //print
    printf("The average form those integer numbers is = %d.\n",mean_value);
    
    return 0;
}

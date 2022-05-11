//  三数比较大小

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // user input three numbers
    int num1,num2,num3;
    int max;
    
    printf("please enter three numbers. ");
    scanf("%d %d %d",&num1,&num2,&num3);
    //compear numbers
    if (num1 < num2)
    {
        max = num2;
    }else
        max = num1;
    
    if (max < num3)
    {
        max = num3;
    }
    //output
    printf("The max value in this three numbers is %d. \n",max);
    
    return 0;
}

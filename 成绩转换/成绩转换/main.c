//
//  main.c
//  成绩转换
//
//  Created by Haris Liang on 2022/5/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int score;
    
    printf("Please enter your score: ");
    scanf("%d",&score);
    //judge
    if (score >= 90)
    {
        printf("A\n");
    }else if (score < 90 && score >= 80)
    {
        printf("B\n");
    }else if (score < 80 && score >= 70)
    {
        printf("C\n");
    }else if (score < 70 && score >= 60)
    {
        printf("D\n");
    }else
        printf("E\n");
    
    return 0;
}

//
//  main.c
//  九九乘法表
//
//  Created by Haris Liang on 2022/5/15.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i;
    
    printf("Enter: ");
    scanf("%d",&i);
    
    for (int a = 1; a <= i; a ++ )
    {
        for (int d = 1; d <= a; d ++)
        {
            printf("%d * %d = %d ",a,d,a*d);
            
        }
        printf("\n");
        
    }
    return 0;
}

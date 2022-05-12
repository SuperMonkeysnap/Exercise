//
//  main.c
//  超速判断
//
//  Created by Haris Liang on 2022/5/12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    const int S = 60;
    float speed;
    
    //input
    printf("Please enter the car current speed: ");
    scanf("%02f",&speed);
    //judge
    while (speed < 0)
    {
        printf("Error speed, it can't smaller than zero.\n");
        printf("Please enter the car current speed: ");
        scanf("%02f",&speed);
    }
    if (speed >= S)
    {
        printf("Speeding\n");
    }else
        printf("OK\n");
    
    
    return 0;
}

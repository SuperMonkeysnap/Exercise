/**
 猜数游戏，程序想一个数字，用户输入一个数字去猜。程序给出这个数字是大了
 还是小了。直到猜出来为止
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int number = rand()%100 + 1;
    int guess;
    int count = 1;
    
    //user input
    printf("Enter a integer number: ");
    scanf("%d",&guess);
    //program judge this number is greater or lesser
    while(guess != number)
    {
        if(guess > number)
        {
            printf("The number is two big.\n");
        }else{
            printf("The number is two small.\n");
        }
        printf("Enter a integer number: ");
        scanf("%d",&guess);
        count ++;
    }
    printf("You tried %d times and you get it ! Well done!! \n",count);
    
    return 0;
}

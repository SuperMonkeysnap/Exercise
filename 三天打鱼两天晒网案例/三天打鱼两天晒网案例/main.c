//
//  main.c
//  三天打鱼两天晒网案例
//  假设某人从某天起，开始“三天打鱼两天晒网”，问这个人在以后的第N天中是“打鱼”还是“晒网”？
//  Created by Haris Liang on 2022/5/12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int day;
    int i;
    //input
    printf("Please enter a day number: ");
    scanf("%d",&day);
    //judge
    i = day - (day/5 * 5);                  // !
    if (i <= 3 )
    {
        printf("Fishing in day %d.\n",day);
    }else
        printf("Drying in day %d.\n",day);
    
    return 0;
}

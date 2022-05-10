#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    printf("Hello, World!\n");
    printf("12 +34 = %d\n",12+34);
    printf("=======================\n");
    
    int price = 0;
    int change = 0;
    int amount = 100;
    
    printf("please enter your price: ");
    scanf("%d",&price);
    printf("please enter your pay amount: ");
    scanf("%d",&amount);
    change = amount - price;
    printf("找您 %d 元. \n",change);
    return 0;
}

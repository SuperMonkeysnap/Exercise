#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int foot = 0;
    float inch = 0.0;
    
    printf("please enter your foot and inch: ");
    scanf("%d %f",&foot,&inch);
    
    printf("your stature is %.2f.",(foot + inch/12) * 0.3048 * 100);
    
    return 0;
}

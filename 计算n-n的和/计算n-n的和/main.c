//
//  main.c
//  计算n-n的和
#include <stdio.h>

int sum (int i, int end)
{
    int a;
    int b = 0;
    for (a = i; a <= end; a++)
    {
        b  = a + b;
    }
    return b;
}

int main(int argc, const char * argv[]) {
    
    int p;
    int a,b;
    
    printf("please enter the star and end: ");
    scanf("%d %d",&a,&b);
    
    p = sum(a,b);
    printf("The sum between %d and %d is = %d\n",a,b,p);
    
    return 0;
}

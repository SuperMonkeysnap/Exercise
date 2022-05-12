#include <stdio.h>
/**
 f(x) = 1 + 1/2 + 1/3 + 1/n ... 
 */
int main(int argc, const char * argv[]) {
    
    const float i = 1;
    float denominator;
    float sum = 0;     //sum
    int n;             //userinput
    
    printf("please enter n: ");
    scanf("%d",&n);
    
    for (denominator = 1; denominator <= n; denominator ++)
    {
        sum = sum + (i/denominator);
    }
    printf("%.2f\n",sum);
    
    return 0;
}

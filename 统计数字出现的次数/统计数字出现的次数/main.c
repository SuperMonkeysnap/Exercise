//输入【0，9】范围内的整数，统计每个数出现的次数。

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int i,number;
    
    printf("How many number do you want to enter in: ");
    scanf("%d",&i);
    //create arr
    int arr[i];
    int countd[10];
    for (int n = 0 ; n < 10 ; n++)
    {
        countd[n] = 0;
    }
    //user input numbers
    for(int count = 0;count < i;count ++) {
        printf("Please enter a integer number: ");
        scanf("%d",&number);
        while (number > 10 || number < 0)
        {
            printf("Incorrect number, the range should between [0,9]\n");
            printf("Please enter a integer number: ");
            scanf("%d",&number);
            
        }
        countd[number] ++;
        arr[count] = number;
    }
    for (int a = 1; a<10; a++)
    {
        printf("The frequency of appearance of %d is: %d \n",a,countd[a]);
    }
    
    return 0;
}

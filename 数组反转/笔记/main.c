#include <stdio.h>

void show_array (int *a, int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d\n", *(a + i));
    }
}

void change_array(int *array, int length)
{
    int num = 4;
    int l;
    for (int i = 0; i < length; i++)
    {
        l = *(array + i);
        if (i == num)
        {
            break;
        }
        *(array + i) = *(array + num);
        *(array + num) = l;
        num --;
    }
}
int main(int argc, const char * argv[]) {
    
    int i[5] = {15,22,31,42,50};
    show_array(i,5);
    change_array(i,5);
    printf("==========\n");
    show_array(i, 5);
    
    return 0;
}


//  二维数组
//
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[3][3];
    int player1 = 0;
    int player2 = 0;
    int control = 0;
    int row,column;
    int ii;
    //输入
    for (int i = 0; i < 3 ; i++)
    {
        for(int a = 0; a < 3; a++)
        {
            arr[i][a] = 0;
        }
        printf("\n");
    }
    for (int i = 0; i < 3 ; i++)
    {
        for(int a = 0; a < 3; a++)
        {
            printf("%d ",arr[i][a]);
        }
        printf("\n");
    }
    printf("\n");
    while (control != 10)
    {
        printf("Please enter row and column: ");
        scanf("%d %d",&row,&column);
        printf("Player1 enter 1, player2 enter 2\n");
        scanf("%d",&ii);
        arr[row-1][column-1] = ii;
        printf("\n");
        for (int i = 0; i < 3 ; i++)
        {
            for(int a = 0; a < 3; a++)
            {
                printf("%d ",arr[i][a]);
            }
            printf("\n");
        }
        
        control++;
    }
    
    //行
    for (int i = 0; i < 3 ; i++)
    {
        for(int a = 0; a < 3; a++)
        {
            if (arr[i][a] == 1)
            {
                player1++;
            }else
                player2++;
        }
        
        if(player1 == 3)
        {
            printf("The winner is player1.\n");
            break;
        }else if(player2 == 3)
        {
            printf("The winner is player2.\n");
            break;
        }else
            player1 = player2 = 0;
    }
    //列
    for (int i = 0; i < 3 ; i++)
    {
        for(int a = 0; a < 3; a++)
        {
            if (arr[a][i] == 1)
            {
                player1++;
            }else
                player2++;
        }
        
        if(player1 == 3)
        {
            printf("The winner is player1.\n");
            break;
        }else if(player2 == 3)
        {
            printf("The winner is player2.\n");
            break;
        }else
            player1 = player2 = 0;
    }
    //正对角
    for(int a = 0;a < 3; a++)
    {
        if (arr[a][a] == 1)
        {
            player1 ++;
        }else
            player2 ++;
    }
    if(player1 == 3)
    {
        printf("The winner is player1.\n");
    }else if(player2 == 3)
    {
        printf("The winner is player2.\n");
    }
    //负对角
    int f = 2;
    for(int l = 0; l<3; l++)
    {
        if(arr[l][f] == 1)
        {
            player1++;
        }else
            player2++;
    }
    
    if(player1 == 3)
    {
        printf("The winner is player1.\n");
    }else if(player2 == 3)
    {
        printf("The winner is player2.\n");
    }
    return 0;
}

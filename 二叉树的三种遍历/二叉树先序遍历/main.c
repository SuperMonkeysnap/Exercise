#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 二叉树的先序遍历
 */
typedef struct BTnode* PBTnode;
typedef struct BTnode
{
    PBTnode Lchild;
    PBTnode Rchild;
    char letter;
}BTnode;

/**
 创建一个BTnode
 */
PBTnode createBTNode(void)
{
    PBTnode n;
    
    n = (PBTnode)malloc(sizeof(struct BTnode));
    
    return n;
}

/**
 前序遍历
 根左右
 */
void preTraverseBTree(PBTnode tree)
{
    if(tree != NULL)
    {
        printf("%c ", tree->letter);
        
        if (tree->Lchild != NULL)
        {
            preTraverseBTree(tree->Lchild);
        }
        
        if(tree->Rchild != NULL)
        {
            preTraverseBTree(tree->Rchild);
        }
    }
}

/**
 中序遍历
 左根右
 */
void InTraverseBTree(PBTnode tree)
{
    if(tree != NULL)
    {
        if (tree->Lchild != NULL)
        {
            InTraverseBTree(tree->Lchild);
        }
        
        printf("%c ", tree->letter);
        
        if(tree->Rchild != NULL)
        {
            InTraverseBTree(tree->Rchild);
        }
    }
}

/**
 后序遍历
 左右根
 */
void postTraverseBTree(PBTnode tree)
{
    if(tree != NULL)
    {
        if (tree->Lchild != NULL)
        {
            InTraverseBTree(tree->Lchild);
        }
        
        if(tree->Rchild != NULL)
        {
            InTraverseBTree(tree->Rchild);
        }
        
        printf("%c ", tree->letter);

    }
    
}


int main(int argc, const char * argv[]) {
    
    PBTnode A,B,C,D,E;
    
    A = createBTNode();
    B = createBTNode();
    C = createBTNode();
    D = createBTNode();
    E = createBTNode();

    A->letter = 'A';
    B->letter = 'B';
    C->letter = 'C';
    D->letter = 'D';
    E->letter = 'E';
    
    A->Lchild = B;
    A->Rchild = C;
    B->Rchild = NULL;
    B->Lchild = NULL;
    C->Lchild = D;
    C->Rchild = NULL;
    D->Lchild = NULL;
    D->Rchild = E;
    E->Lchild = NULL;
    E->Rchild =NULL;
    
    preTraverseBTree(A);
    
    printf("\n");
    
    InTraverseBTree(A);
    
    printf("\n");
    
    postTraverseBTree(A);
    
    printf("\n");
    
    return 0;
}

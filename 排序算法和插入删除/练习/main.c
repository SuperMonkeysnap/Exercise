//
//  main.c
//  练习
//
//  Created by Huahui Liang on 2022/6/30.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 创建节点结构体
 */
typedef struct node
{
    int data;
    struct node *next;
}*PNode,node; //

/**
 判断是否为空的头节点
 */
bool isEmpty(PNode head)
{
    if ((*head).data != 0)
    {
        return false;
    }else
        return true;
    
}

/**
 创建一个节点结构体变量
 */
PNode createNode(int value)
{
    PNode p;
    
    p =(PNode)malloc(sizeof(node));
    (*p).data = value;
    (*p).next = NULL;
    
    return p; //p里面存的是一个地址，p是一个指针。
}

/**
 创建一个链表头并返回一个头指针
 */
PNode createList(void)
{
    PNode p;
    p =(PNode)malloc(sizeof(node));
    (*p).data = 0; //头节点的数据域用来记录这个链表有几个真实节点
    (*p).next = NULL;
    
    return p;
}

/**
 插入节点到链表
 */
void insertNodeToList(PNode head, PNode node)
{
    /**
     如果头节点没有任何节点
     */
    if (isEmpty(head))
    {
        (*head).next = node;
        (*head).data ++;
        return;
    }
    
    /**
     如果头节点已经有数据了，遍历到最后一个，然后插入。
     */
    PNode last;
    last = (*head).next;
    
    while((*last).next != NULL)
    {
        last = (*last).next;
    }
    
    (*last).next = node;
    (*head).data ++;
}

/**
 输出链表,输入一个头节点
 */
void showList(PNode head)
{
    if (isEmpty(head))
    {
        printf("The list is empty.\n");
        return;
    }
    
    PNode Node;
    Node = (*head).next;
    
    
    for (int i = 0; i < (*head).data; i++)
    {
        printf("%d ", (*Node).data);
        Node = (*Node).next;
    }
    printf("\n");
}

/**
 指定修改链表中的某一个节点
 head表示这个链表的头指针
 num表示第几个节点需要修改
 data表示在num个节点中的数据是data
 */
void changeList(PNode head, int num, int data)
{
    PNode n4;
    PNode n5;
    if (num > (*head).data +1 )
    {
        printf("该链表中没有%d个节点。",num);
        return;
    }
    
    
    n4 = (*head).next;
    
    if (num == head->data+1)
    {
        n5 = createNode(data);
        insertNodeToList(head, n5);
        
        return;
    }
        
    for (int i = 0; i < num - 1; i++)
    {
        n4 = (*n4).next;
    }
    
    (*n4).data = data;
    
    showList(head);
    
    return;
}

/**
 删除链表的某一个节点
 num 表示删除链表中第num个节点
 */
void deleteNode(PNode head, int num)
{
    PNode n1;
    PNode n2;
    int i = 0;
    
    if(head->data < num)
    {
        printf("链表中没有节点%d。\n",num);
        return;
    }
    
    if (isEmpty(head))
    {
        printf("该链表为空.\n");
        return;
    }
    
    n1 = (*head).next;
    n2 = n1;
    
    while(i < num)
    {
        n2 = n1;
        n1 = n1->next;
        i++;
    }
    
    n2->next = n1->next;
    (*head).data--;
    
    free(n1);
    n1 = NULL;
    
    return;
}

/**
 排序算法
 */

void sortList(PNode head)
{
    int i,j,t;
    PNode p, q;
    
    for (i = 0 , p = (*head).next; i < (*head).data - 1; ++i, p = p->next)
    {
        for (j = i+1, q = (*p).next; j < (*head).data; ++j, q = q->next)
        {
            if ((*p).data < (*q).data)
            {
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
    
    return;
}

int main(int argc, const char * argv[]) {
    
    /**
     头节点
     */
    PNode head;
    head = createList();
    
    /**
    创建第一个节点，调用createNode
     */
    PNode n1;
    PNode n2;
    n1 = createNode(10);
    n2 = createNode(20);
    /**
     插入到链表
     */
    insertNodeToList(head, n1);
    insertNodeToList(head, n2);
    /**
     输出链表
     */
    showList(head);
    printf("==========\n");
    
    int input = 0; //用户输入的数字
    PNode n3; //使用一个指针去操作记录被创建的节点
    
    PNode head2;
    head2 = createList();
    
    while(true)
    {
        printf("请输入数字：");
        scanf("%d",&input);
        
        /**
         如果输入数字为-1 表示退出
         */
        if (input == -1)
        {
            showList(head2);
            break;
        }
        
        n3 = createNode(input);
        insertNodeToList(head2,n3);
        
    }
    printf("%d\n",(*head2).data); //打印该链表里面有几个有效节点
    
    //==========================
    
    sortList(head2);
    showList(head2);
    
    changeList(head2, 6, 520);
    showList(head2);
    
    return 0;
}

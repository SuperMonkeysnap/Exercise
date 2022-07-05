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
struct node
{
    int data;
    struct node *next;
};

/**
 判断是否为空的头节点
 */
bool isEmpty(struct node* head)
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
struct node* createNode(int value)
{
    struct node* p;
    p =(struct node*)malloc(sizeof(struct node));
    (*p).data = value;
    (*p).next = NULL;
    
    return p; //p里面存的是一个地址，p是一个指针。
}

/**
 创建一个链表头并返回一个头指针
 */
struct node* createList(void)
{
    struct node* p;
    p =(struct node*)malloc(sizeof(struct node));
    (*p).data = 0; //头节点的数据域用来记录这个链表有几个真实节点
    (*p).next = NULL;
    
    return p;
}

/**
 插入节点到链表
 */
void insertNodeToList(struct node* head, struct node* node)
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
    struct node* last;
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
void showList(struct node* head)
{
    if (isEmpty(head))
    {
        printf("The list is empty.\n");
        return;
    }
    
    struct node* Node;
    Node = (*head).next;
    
    for (int i = 0; i < (*head).data; i++)
    {
        printf("%d ", (*Node).data);
        Node = (*Node).next;
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    
    /**
     头节点
     */
    struct node* head;
    head = createList();
    
    /**
    创建第一个节点，调用createNode
     */
    struct node* n1;
    struct node* n2;
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
    
    return 0;
}

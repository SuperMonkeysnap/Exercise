#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct queue* Pqueue;
typedef struct queue
{
    int* p; //这个指针指向一个数组
    int front; //头下标
    int rear;  //尾下标
    
}queue;

Pqueue init_queue(Pqueue queue)
{
    queue = (Pqueue)malloc(sizeof(queue));
    queue->p = (int*)malloc(sizeof(int) * 5);
    queue->front = 0;
    queue->rear = 0;
    
    return queue;
}

bool isEmpty(Pqueue queue)
{
    if(queue->front == queue->rear)
    {
        return true;
    }else
    {
        return false;
    }
}

bool isFull(Pqueue queue)
{
    if ((queue->rear + 1) % 5 == queue->front)
    {
        return true;
    }else
        return false;
}

/**
 入队
 */
void en_queue(Pqueue queue, int num)
{
    if (isFull(queue))
    {
        printf("The queue is full.\n");
        return;
    }
    
    queue->p[queue->rear] = num;
    queue->rear = (queue->rear + 1) % 5; //移到下一个地址
    
}

/**
 遍历队列
 */
void traverse_queue(Pqueue queue)
{
    int i;
    
    if(isEmpty(queue))
    {
        printf("The queue is empty.\n");
        return;
    }
    
    i = queue->front;
    
    while (i != queue->rear)
    {
        
        printf("%d ", queue->p[i]);
        i = (i + 1) % 5;
        
    }
    printf("\n");
}

/**
 出队
 */
void out_queue(Pqueue queue, int* num)
{
    if(isEmpty(queue))
    {
        printf("This is an empty queue.\n");
        return;
    }
    
    (*num) = queue->p[queue->front];
    queue->front = (queue->front + 1) % 5;
    printf("数字%d出队成功。\n", (*num));
    
}


int main(int argc, const char * argv[]) {
   
    int num;
    Pqueue queue = NULL;
    queue = init_queue(queue);
    
    en_queue(queue, 520);
    en_queue(queue, 100);
    en_queue(queue, 1);
    en_queue(queue, 2);
    en_queue(queue, 3);
    
    traverse_queue(queue);
    out_queue(queue, &num);
    printf("数字%d出队成功。\n", num);
    traverse_queue(queue);
    en_queue(queue, 3);
    traverse_queue(queue);
    out_queue(queue,&num);
    traverse_queue(queue);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node* Pnode;
typedef struct node
{
    int data;
    Pnode next;
}node, *Pnode;

typedef struct stack* Pstack;
typedef struct stack
{
    Pnode bottom;
    Pnode top;
    
}stack;


void initStack(Pstack stack)
{
    stack->top = (Pnode)malloc(sizeof(node));
    if (stack->top == NULL)
    {
        printf("内存不足。\n");
        exit(-1);
    }
    stack->top = stack->bottom;
    //stack->bottom->data = 0;
    //stack->bottom->next =NULL;
    
}

void push(Pstack stack, int num)
{
    Pnode pn;
    pn = (Pnode)malloc(sizeof(node));
    if(pn == NULL)
    {
        printf("内存不足。\n");
        exit(-1);
    }
    pn->data = num;
    pn->next = stack->top;
    stack->top = pn;
    
    return;
    
}

void traverseStack(Pstack stack)
{
    Pnode n;
    
    if (stack->top == stack->bottom)
    {
        printf("This is an empty stack.\n");
        return;
    }
    
    n = stack->top;
    while(n != stack->bottom)
    {
        printf("%d ", n->data);
        n = n->next;
    }
    printf("\n");
    
    return;
}

bool pop(Pstack stack, int* p)
{
    Pnode n;
    
    if(stack->top != stack->bottom)
    {
        n = stack->top;
        (*p) = n->data;
        stack->top = stack->top->next;
        free(n);
        n = NULL;
        
        return true;
    }else
    {
        
        return false;
    }
}

void cleard(Pstack stack)
{
    Pnode p;
    
    if (stack->top == stack->bottom)
    {
        printf("This is an empty stack.\n");
        return;
    }else
    {
        p = stack->top;
        while(p != stack->bottom)
        {
            stack->top = stack->top->next;
            free(p);
            p = stack->top;
        }
    }
    
    return;
}
int main(int argc, const char * argv[]) {
   
    Pstack stack;
    int j;
    
    stack = (Pstack)malloc(sizeof(stack));
    stack->top = NULL;
    stack->bottom = NULL;
    
    initStack(stack);
    push(stack, 10);
    push(stack, 20);
    traverseStack(stack);
    
    cleard(stack);
    traverseStack(stack);
    
    
    
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <stdbool.h>
#include <stdlib.h>
#include <malloc.h>

/*
	typedef 的用法
	给一个类型起别名
*/
typedef int a; // a = int 
a num = 15; // int num = 15


/*
	题目：
	创建一个链表，每个node的data储存一个int数据，找出最大的data然后删掉。
*/

/*
	定义一个node结构体
	并给这个结构体起来个别名，struct node_int = *node
*/

typedef struct node_int *node;

typedef struct node_int
{
	int data; //数据域
	node next; // 指针域 必须是个指针指向下一个节点
			   // next 是一个指针变量，该指针变量指向一个node_int类型的节点
}*node;

/*
	定义链表结构
	给 struct list_int 取了个别名 叫*list 
	struct list_int = *list; 
*/
typedef struct list_int 
{
	node front;

}*list;

/*
	该方法创建一个节点
*/
void init_node(node *v,int a) 
{
	(*v) = (node*)malloc(sizeof(struct node_int)); // 开辟一块node—int类型的内存空间 并返回一个node*的地址 赋值给v
	(*v)->data = a;
	(*v)->next = NULL;
}

/*
	该方法获取该节点的data返回一个int
*/
int get_data(node a) 
{
	return a->data;
}

/*
	该方法获取下一个节点的指针 返回一个指向node——int类型的指针
*/
node get_next(node a)
{
	return a->next;
}

/*
	改变data 
*/
void set_data(node *a,int b) // 这种写法跟这种写法node* a是一样的
{
	(*a)->data = b;
}

/*
	设置下一个节点
*/
void set_next(node a, node b) //两种写法 也可以这样写node* b 这实际上是个指针
{
	a->next = b;
}

/*
	该方法能编写链表内容，用户键盘输入
*/

void twonode(list a)
{
	node* head;
	printf("please enter a number:");
	int* num;
	scanf("%d",&num);
	init_node(&head,num);
	printf("%d\n", get_data(head)); //注意 要调用这个方法去访问head的data 不能 printf("%d\n",(*head)->data); 这样会引发空指针异常
	(a)->front = head; // 直接这样写就可以了，不需要 （*a）-》fornt = head； 因为list本身就是个指针类型
	printf("链表属性front里面的数据是 = %d\n",a->front->data); 
	printf("=====================================\n");
	/*
	* 设置下一个节点
	*/

	node* nextNode;
	printf("please enter a number:");
	int* num2;
	scanf("%d",&num2);
	init_node(&nextNode,num2 );
	set_next(head,nextNode); 
	printf("next node's data is = %d\n", get_data(nextNode));

	return a;
}

int main()
{
	//创建一个链表
	//list lianbiao; // 这是个指针，指向list_int结构体的链表
	struct list_int lianbiao;

	//创建一个node
	node* test; // 这是个指针，指向node_int结构体类型的节点
	init_node(&test,10); //调用方法创建node
	
	//查看头节点的数据
	int i = get_data(test);
	printf("%d\n", i); // 输出10

	(&lianbiao)->front = test; //把头节点传进去
	printf("%d\n",lianbiao.front->data); //输出10 

	printf("========================================\n");

	struct list_int a; //定义一个全新的链表 这是个指针
	node* head;
	printf("please enter a number:");
	int* num;
	scanf("%d", &num);
	init_node(&head, num);
	printf("%d\n", get_data(head)); //注意 要调用这个方法去访问head的data 不能 printf("%d\n",(*head)->data); 这样会引发空指针异常
	a.front = head; // 直接这样写就可以了，不需要 （*a）-》fornt = head； 因为list本身就是个指针类型
	printf("链表属性front里面的数据是 = %d\n", a.front->data);
	printf("=====================================\n");
	/*
	* 设置下一个节点
	*/

	node* nextNode;
	printf("please enter a number:");
	int* num2;
	scanf("%d", &num2);
	init_node(&nextNode, num2);
	set_next(head, nextNode);
	printf("next node's data is = %d\n", get_data(nextNode));

	
	node check = get_next(head);
	printf("currentData = %i\n", get_data(head));
	while (check != NULL) 
	{
		int currentData = check->data;
		printf("currentData = %i\n", currentData);
		check = check->next;
	}
	return 0;
}

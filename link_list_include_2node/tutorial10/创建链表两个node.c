#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include <stdbool.h>
#include <stdlib.h>
#include <malloc.h>

/*
	typedef ���÷�
	��һ�����������
*/
typedef int a; // a = int 
a num = 15; // int num = 15


/*
	��Ŀ��
	����һ������ÿ��node��data����һ��int���ݣ��ҳ�����dataȻ��ɾ����
*/

/*
	����һ��node�ṹ��
	��������ṹ��������������struct node_int = *node
*/

typedef struct node_int *node;

typedef struct node_int
{
	int data; //������
	node next; // ָ���� �����Ǹ�ָ��ָ����һ���ڵ�
			   // next ��һ��ָ���������ָ�����ָ��һ��node_int���͵Ľڵ�
}*node;

/*
	��������ṹ
	�� struct list_int ȡ�˸����� ��*list 
	struct list_int = *list; 
*/
typedef struct list_int 
{
	node front;

}*list;

/*
	�÷�������һ���ڵ�
*/
void init_node(node *v,int a) 
{
	(*v) = (node*)malloc(sizeof(struct node_int)); // ����һ��node��int���͵��ڴ�ռ� ������һ��node*�ĵ�ַ ��ֵ��v
	(*v)->data = a;
	(*v)->next = NULL;
}

/*
	�÷�����ȡ�ýڵ��data����һ��int
*/
int get_data(node a) 
{
	return a->data;
}

/*
	�÷�����ȡ��һ���ڵ��ָ�� ����һ��ָ��node����int���͵�ָ��
*/
node get_next(node a)
{
	return a->next;
}

/*
	�ı�data 
*/
void set_data(node *a,int b) // ����д��������д��node* a��һ����
{
	(*a)->data = b;
}

/*
	������һ���ڵ�
*/
void set_next(node a, node b) //����д�� Ҳ��������дnode* b ��ʵ�����Ǹ�ָ��
{
	a->next = b;
}

/*
	�÷����ܱ�д�������ݣ��û���������
*/

void twonode(list a)
{
	node* head;
	printf("please enter a number:");
	int* num;
	scanf("%d",&num);
	init_node(&head,num);
	printf("%d\n", get_data(head)); //ע�� Ҫ�����������ȥ����head��data ���� printf("%d\n",(*head)->data); ������������ָ���쳣
	(a)->front = head; // ֱ������д�Ϳ����ˣ�����Ҫ ��*a��-��fornt = head�� ��Ϊlist������Ǹ�ָ������
	printf("��������front����������� = %d\n",a->front->data); 
	printf("=====================================\n");
	/*
	* ������һ���ڵ�
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
	//����һ������
	//list lianbiao; // ���Ǹ�ָ�룬ָ��list_int�ṹ�������
	struct list_int lianbiao;

	//����һ��node
	node* test; // ���Ǹ�ָ�룬ָ��node_int�ṹ�����͵Ľڵ�
	init_node(&test,10); //���÷�������node
	
	//�鿴ͷ�ڵ������
	int i = get_data(test);
	printf("%d\n", i); // ���10

	(&lianbiao)->front = test; //��ͷ�ڵ㴫��ȥ
	printf("%d\n",lianbiao.front->data); //���10 

	printf("========================================\n");

	struct list_int a; //����һ��ȫ�µ����� ���Ǹ�ָ��
	node* head;
	printf("please enter a number:");
	int* num;
	scanf("%d", &num);
	init_node(&head, num);
	printf("%d\n", get_data(head)); //ע�� Ҫ�����������ȥ����head��data ���� printf("%d\n",(*head)->data); ������������ָ���쳣
	a.front = head; // ֱ������д�Ϳ����ˣ�����Ҫ ��*a��-��fornt = head�� ��Ϊlist������Ǹ�ָ������
	printf("��������front����������� = %d\n", a.front->data);
	printf("=====================================\n");
	/*
	* ������һ���ڵ�
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

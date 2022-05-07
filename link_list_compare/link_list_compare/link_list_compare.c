#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct node_int
{
	int* data;
	struct node_int* next;
}*node;

typedef struct list_int
{
	node Node;

}*list;

void initial_node(node* point, int* data) //传入一个指向node **类型的指针
{

	(*point) = (node)malloc(sizeof(struct node_int));
	(*point)->data = data;
	(*point)->next = NULL;
}

void print_var_in_node(node h)
{
	node check_var;
	printf("head data = %d\n", h->data); // 10
	check_var = h->next;
	if (check_var != NULL)
	{
		printf("%d\n", check_var->data); //20

		while (check_var->next != NULL)
		{
			check_var = check_var->next;
			printf("%d\n", check_var->data); //30
		}
	}
}

void userinput_createnode(node* a) // node_int ** a
{
	int i;
	printf("please enter a number :  ");
	scanf("%d", &i);
	initial_node(a, i);

}

void create_list(list* lis, node h)
{
	(*lis) = (list)malloc(sizeof(struct list_int));
	(*lis)->Node = h;
}

void add_node_to_head(node head, node New)
{
	node c;
	c = head->next;
	while (c->next != NULL)
	{
		c = c->next;
	}
	c->next = New;
}

int findMax(node head) 
{
	int n, m;
	node check;
	check = head;
	n = head->data;

	while (check->next != NULL)
	{
		check = check->next;
		m = check->data;
		if (m > n)
		{
			n = m;
		}
	}
	//printf("the biggest value is = %d\n", n);
	return n;
}

void delete_node_num(node *head,int ii) 
{
	node a;
	node b; 
	a = (* head);
	b = NULL;
	if ((*head) == NULL) 
	{
		printf("null link list\n");
		return;
	}
	while (a->data != ii && a->next != NULL) 
	{
		b = a;
		a = a->next;
	}

	if (a->data == ii) 
	{
		if (a == (*head))
		{
			(*head) = a->next;
		}
		else 
		{
			b->next = a->next;
		}
		free(a);
	}

}
int main()
{
	node head;
	node a;
	node b;
	node c;
	node d;
	node e;


	userinput_createnode(&head);
	userinput_createnode(&a);
	userinput_createnode(&b);
	userinput_createnode(&c);
	userinput_createnode(&d);
	userinput_createnode(&e);


	head->next = a;
	a->next = b;
	b->next = c;
	c->next = d;

	add_node_to_head(head, e);

	print_var_in_node(head);

	int anan = findMax(head);
	printf("the biggest value is = %d\n",anan);
	
	delete_node_num(&head,anan);

	print_var_in_node(head);

	list one;
	create_list(&one, head);

	return 0;
}
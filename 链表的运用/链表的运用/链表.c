#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	void* data; // 定义数据域 指针指向某一个数组或数据
	struct node* next;  // 定义指针域 指针用来指向下一个节点 这里不能用别名 因为别名还没创建
}Node;


int main()
{
	Node* head = (Node*)malloc(sizeof(Node)); //创建空node链表头 注意 这行代码不能放在main外面
	head->next = NULL;
	//Node* node = creatNode(); // 调用creaenode函数 创建一个node
	//inputNode(node);
	

	return 0;
}

Node* creatNode() 
{
	Node* addressP = (Node*)malloc(sizeof(Node)); // 开辟一块空间 用这个pointer指向它
	/*
		这段代码是用来判断addressp指向的这个内存空间有没有成功开辟
		如果没有， 使用exit（-1）表示程序异常退出
	*/
	if (addressP == NULL)
	{
		exit(-1);
	}

	addressP->next = NULL;

	return addressP; //返回一个指针 这个指针指向块Node类型的内存空间
}


/*
	创建一个数组 通过用户键盘输入 给这个数组赋值
	然后把这个数组存放到node。data里面
*/
void inputNode(Node* node)
{
	int arr[10]; //创建一个数组
	int* arrp = &arr; // 创建一个该数组的指针 这个指针指向这个数组

	/*
		用户键盘输入 给这个数组赋值
	*/
	int number = 0;

	for (int c = 0; c < 10; c++) {
		printf("please enter a number.\n");
		scanf("%d", &number);
		arrp = arrp + c;
		arrp = number; //给arr[c]赋值
	}

	node->data = arr;
	
}
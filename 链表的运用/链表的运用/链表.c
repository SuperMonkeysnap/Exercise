#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	void* data; // ���������� ָ��ָ��ĳһ�����������
	struct node* next;  // ����ָ���� ָ������ָ����һ���ڵ� ���ﲻ���ñ��� ��Ϊ������û����
}Node;


int main()
{
	Node* head = (Node*)malloc(sizeof(Node)); //������node����ͷ ע�� ���д��벻�ܷ���main����
	head->next = NULL;
	//Node* node = creatNode(); // ����creaenode���� ����һ��node
	//inputNode(node);
	

	return 0;
}

Node* creatNode() 
{
	Node* addressP = (Node*)malloc(sizeof(Node)); // ����һ��ռ� �����pointerָ����
	/*
		��δ����������ж�addresspָ�������ڴ�ռ���û�гɹ�����
		���û�У� ʹ��exit��-1����ʾ�����쳣�˳�
	*/
	if (addressP == NULL)
	{
		exit(-1);
	}

	addressP->next = NULL;

	return addressP; //����һ��ָ�� ���ָ��ָ���Node���͵��ڴ�ռ�
}


/*
	����һ������ ͨ���û��������� ��������鸳ֵ
	Ȼ�����������ŵ�node��data����
*/
void inputNode(Node* node)
{
	int arr[10]; //����һ������
	int* arrp = &arr; // ����һ���������ָ�� ���ָ��ָ���������

	/*
		�û��������� ��������鸳ֵ
	*/
	int number = 0;

	for (int c = 0; c < 10; c++) {
		printf("please enter a number.\n");
		scanf("%d", &number);
		arrp = arrp + c;
		arrp = number; //��arr[c]��ֵ
	}

	node->data = arr;
	
}
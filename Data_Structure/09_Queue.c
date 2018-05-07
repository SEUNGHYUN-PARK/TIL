#include <stdio.h>
typedef struct QUEUE
{
	int data[10];
	int front, rear;
	int qsize;
}queue;

queue q;
void enqueue(int data)
{
	if (q.rear == q.qsize-1)
	{
		printf("queue is full\n");
		return;
	}
	else
	{
		q.data[++q.rear] = data; //  ȯ��ť�� �����ϰ������, q.data[(q.rear%q.qsize)++]= data�� ���·� ������ ���Ե�
		printf("%d is pushed on a queue\n", data);
	}
}
void dequeue()
{
	if (q.front > q.rear)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
		int temp = q.data[q.front++]; //  ȯ��ť�� �����ϰ������, q.data[(q.front%q.qsize)++]�� ���·� ������ ���Ե�
		printf("%d is popped on a queue\n", q.data[q.front]);

	}

}
void print_queue()
{
	int tmp;
	if (q.front == -1)
	{
		tmp = 0;
	}
	else
	{
		tmp = q.front;
	}
	for (int i =tmp; i <= q.rear; i++)
	{
		printf("%d ", q.data[i]);
	}
	printf("\n");
}
int main(void)
{
	q.front = q.rear = -1;
	// ȯ��ť�ϰ�� 0���� ����=> a%b ������ ���� Ư¡ 0~b-1���� �����⋚���� -1�� �ȵ�
	q.qsize = sizeof(q.data) / 4;
	for (int i = 0; i < 15; i++)
	{
		enqueue(i);
		print_queue();
	}
	print_queue();
	for (int i = 0; i < 15; i++)
	{
		dequeue();
		print_queue();
	}

}
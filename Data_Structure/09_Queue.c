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
		q.data[++q.rear] = data; //  환형큐를 적용하고싶으면, q.data[(q.rear%q.qsize)++]= data의 형태로 데이터 삽입됨
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
		int temp = q.data[q.front++]; //  환형큐를 적용하고싶으면, q.data[(q.front%q.qsize)++]의 형태로 데이터 삽입됨
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
	// 환형큐일경우 0부터 시작=> a%b 연산의 값의 특징 0~b-1까지 나오기떄문에 -1은 안됨
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
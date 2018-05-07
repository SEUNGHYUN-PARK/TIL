#include <stdio.h>
typedef struct STACK
{
	int arr[10];
	int top;
}stack;
stack st;
void push(int data)
{
	int arrsize = sizeof(st.arr) / 4 - 1;
	if (st.top == arrsize)
	{
		printf("Stack is full\n");
	}
	else
	{
		st.arr[++st.top] = data;
		printf("%d is pushed in stack\n",data);
	}
}
void pop()
{
	if (st.top == -1)
	{
		printf("Stack is Empty\n");
		return;
	}
	else
	{
		printf("%d is popped\n", st.arr[st.top--]);
	}
}
int main(void)
{
	st.top = -1; // -1 or 0 
	for (int i = 0; i < 15; i++)
		push(i);

	for (int i = 0; i < 15; i++)
		pop();

}
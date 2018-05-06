#include <stdio.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b; 
	*b = tmp;
}

int main(void)
{
	int a = 10;
	int b = 20;
	printf("a : %d &a : %x\nb : %d &b : %x ", a,&a,b,&b);
	printf("\n");
	swap(&a,&b);
	printf("a : %d &a : %x\nb : %d &b : %x ", a, &a, b, &b);
}
#include <stdio.h>
#include <stdlib.h>
typedef struct NODE
{
	int data;
	struct NODE *next;
}node;

int main(void)
{
	node *p1,*p2;
	p1 = (node *)malloc(sizeof(node));
	p1->data = NULL;
	p1->next = NULL;
	p2 = (node*)malloc(sizeof(node));
	p2->data = 10;
	p2->next = NULL;
	p1->next = p2;

	free(p2);
	free(p1);
}
#include <stdio.h>
#include <stdlib.h>
struct HEY
{
	int i;
	char c;
}s,*ps;

typedef struct ALL
{
	int a;
	int b;
}all;
void swap(all *a, all *b)
{
	all tmp;
	tmp.a = a->a;
	tmp.b = a->b;
	a->a = b->a;
	a->b = b->b;
	b->a = tmp.a;
	b->b = tmp.b;
}
int main(void)
{
	ps = &s;
	s.i = 10;
	s.c = 'a';
	printf("%d %c\n", s.i, s.c);

	ps->i = 20;
	ps->c = 'b';

	printf("%d %c\n", s.i, s.c);

	all *a, c, d;
	c.a = 1;
	c.b = 2;
	d.a = 3;
	d.b = 4;
	printf("%d %d %d %d\n", c.a, c.b, d.a, d.b);
	swap(&c, &d);
	printf("%d %d %d %d\n", c.a, c.b, d.a, d.b);

	a = (all*)malloc(sizeof(all));
	a->a = 10;
	a->b = 20;
	printf("%d %d", a->a, a->b);

}
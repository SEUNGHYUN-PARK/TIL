#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int a = 10; // int�� ������ ���� a�� �����Ѵ�.
	int b = 20;
	printf("%d %x\n%d %x\n", a, &a, b, &b);
	int* p = &a; // int�� �������� �ּҸ� �����ϴ� ����
	p = &b; // �������� �ּҰ� b�� �ٲ�
	*p = 10; // ���� �����ͺ����� b�� �����״µ� ����Ų b�� �������� 10���� �ٲ۴�.
	printf("%d %x\n%d %x\n", a, &a, b, &b);
	p = &a;
	*p = 20;
	printf("%d %x\n%d %x\n", a, &a, b, &b);

}
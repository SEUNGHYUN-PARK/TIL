#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
	int *pi;
	pi = (int *)malloc(sizeof(int));

	*pi = 7; // *�����ȿ��� �ּҰ� ����ְ� �ش��ּ��� �����Ͱ��� �����͸� ���� �ٲٰ� ������ *�� �̿��Ѵ�.
	printf("%d\n", *pi);
	free (pi);
}
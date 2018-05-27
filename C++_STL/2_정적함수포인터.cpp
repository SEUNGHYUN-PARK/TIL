#include <iostream>
using namespace std;

/*
�Լ�ȣ���� 3���� ���
�����Լ� ȣ��
��ü�� ����Լ� ȣ��
��ü�� �ּҷ� ����Լ� ȣ��
*/
void print(int n)
{
	cout << "���� �Լ� : " << n << endl;
}
namespace A
{
	void print(int n)
	{
		cout << "namespace A �����Լ�: " << n << endl;
	}
}

class Point
{
public:
	static void print(int n)
	{
		cout << "PointŬ������ ��������Լ� : " << n << endl;
	}
};

int main()
{
	void(*pf)(int);

	print(10);
	A::print(10);
	Point::print(10);

	pf = print;
	pf(10);
	pf = A::print;
	pf(10);
	pf = Point::print;
	pf(10);

	return 0;
}
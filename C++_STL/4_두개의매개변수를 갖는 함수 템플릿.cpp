#include <iostream>
using namespace std;

template <typename T1, typename T2> // �ΰ����̻��� �Ѳ����� ����ϰ� �ʹٸ� ���ø� ������ �̷������� �ϳ��� �߰��ϸ�ǳ�!
void print(T1 a, T2 b)
{
	cout << a << " " << b << endl;
}

int main()
{
	print(10, 1.5);
	print("hello", 100);
	print(1.5, "hello");
	print(10, 20);
	return 0;
}
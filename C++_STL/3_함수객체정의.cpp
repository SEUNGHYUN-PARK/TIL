#include <iostream>
using namespace std;
//�Լ���ü�� �Լ�ó�� �����ϴ� ��ü
void print()
{
	cout << "�����Լ� !" << endl;
}
struct Functor
{
	void operator()()
	{
		cout << "�Լ� ��ü!" << endl;
	}
};
int main()
{
	Functor functor;
	print();
	functor();
	return 0;
}
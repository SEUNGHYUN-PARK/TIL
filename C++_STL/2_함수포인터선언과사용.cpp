#include <iostream>
using namespace std;

void print(int n)
{
	cout << "���� : " << n << endl;
}

int main()
{
	//void Print(int n)�� �Լ� ������ ����
	void(*pf)(int);
	pf = print;
	print(10);
	pf(10);
	(*pf)(10);

	cout << endl;
	cout << print << endl;
	cout << pf << endl;
	cout << *pf << endl;

	return 0;

}
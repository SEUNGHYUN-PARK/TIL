#include <iostream>
using namespace std;

void print(int n)
{
	cout << "정수 : " << n << endl;
}

int main()
{
	//void Print(int n)의 함수 포인터 선언
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
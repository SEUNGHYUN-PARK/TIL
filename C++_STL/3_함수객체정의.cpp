#include <iostream>
using namespace std;
//함수객체는 함수처럼 동작하는 객체
void print()
{
	cout << "전역함수 !" << endl;
}
struct Functor
{
	void operator()()
	{
		cout << "함수 객체!" << endl;
	}
};
int main()
{
	Functor functor;
	print();
	functor();
	return 0;
}
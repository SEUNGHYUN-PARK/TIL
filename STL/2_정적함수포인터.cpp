#include <iostream>
using namespace std;

/*
함수호출의 3가지 방법
정적함수 호출
객체로 멤버함수 호출
객체의 주소로 멤버함수 호출
*/
void print(int n)
{
	cout << "전역 함수 : " << n << endl;
}
namespace A
{
	void print(int n)
	{
		cout << "namespace A 전역함수: " << n << endl;
	}
}

class Point
{
public:
	static void print(int n)
	{
		cout << "Point클래스의 정적멤버함수 : " << n << endl;
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
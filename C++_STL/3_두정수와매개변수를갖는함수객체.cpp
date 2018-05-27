#include <iostream>
using namespace std;

void print(int a, int b)
{
	cout << "전역 함수 : " << a << "," << b << endl;
}

struct Functor
{
	void operator()(int a, int b)
	{
		cout << "함수 객체: " << a << ',' << b << endl;
	}
};
int main()
{
	Functor functor;
	print(10, 20);
	functor(10, 20);
	return 0;
}
//함수객체의 장점
//함수 객체는 함수처럼 동작하는 객체이므로 다른멤버 변수와 멤버함수를 가질 수 있고, 일반 함수에서 하지 못하는 지원을 받을 수 있다.
//또한 함수 객체의 서명이 같더라도 객체 타입이 다르면 서로 전혀 다른 타입으로 인식한다
//속도도 일반함수보다 함수 객체가 빠르다.
//함수의 주소를 전달하여 콜백하는 경우 이 함수 포인터는 인라인될 수 없지만
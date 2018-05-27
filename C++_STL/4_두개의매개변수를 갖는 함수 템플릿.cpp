#include <iostream>
using namespace std;

template <typename T1, typename T2> // 두가지이상을 한꺼번에 출력하고 싶다면 템플릿 설정을 이런식으로 하나씩 추가하면되네!
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
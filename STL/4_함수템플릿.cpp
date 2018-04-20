#include <iostream>
using namespace std;
template<typename T>


void print(T a, T b)
{
	cout << a << " " << b << endl;
}

int main()
{
	print(10, 20);
	print(0.123, 1.123);
	print("abc", "hello");
	return 0;
}

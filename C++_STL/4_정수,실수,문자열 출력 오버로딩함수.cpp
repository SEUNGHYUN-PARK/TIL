#include <iostream>
using namespace  std;

void print(int a, int b)
{
	cout << a << " " << b << endl;
}
void print(double a, double b)
{
	cout << a << " " << b << endl;
}
void print(const char * a, const char * b)
{
	cout << a << " " << b << endl;
}

int main()
{
	print(10, 20);
	print(0.123, 1.123);
	print("ABC", "abcde");

	return 0;
}
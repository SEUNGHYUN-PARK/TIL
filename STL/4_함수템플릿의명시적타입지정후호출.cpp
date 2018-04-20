#include <iostream>
using namespace std;

template<typename T>
void print(T a, T b)
{
	cout << a << " " << b << endl;
}
int main()
{
	print<int>(10, 20);
	print<double>(0.123, 1.123);
	print<const char*>("ABC", "abcde");

}

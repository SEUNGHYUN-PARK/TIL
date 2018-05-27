#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print()const
	{
		cout << x << "," << y << endl;
	}
};
template<typename T>
void Print(T a)
{
	cout << a << endl;
}
template <>
void Print(Point a)
{
	cout << "Print 특수화 버전: ";
	a.print();
}

int main()
{
	int n = 10;
	double d = 2.5;
	Point pt(2, 3);

	Print(n);
	Print(d);
	Print(pt);

	return 0;
}
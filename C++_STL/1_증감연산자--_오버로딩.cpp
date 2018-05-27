#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int _x=0, int _y=0) :x(_x), y(_y) {}
	void print() const
	{
		cout << x << "," << y << endl;
	}
	const Point& operator--()
	{
		--x;
		--y;
		return *this;
	}
	const Point& operator--(int)
	{
		Point pt(x, y);
		--x;
		--y;
		return pt;
	}
};

int main()
{
	Point p1(2, 3), pt2(2, 3);
	Point result;

	result = --p1;
	p1.print();
	result.print();

	result = pt2--;
	pt2.print();
	result.print();

	return 0;

}
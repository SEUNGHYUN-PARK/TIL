#include <iostream>
using namespace std;

class Point 
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print()const
	{
		cout << x << "," << y << endl;
	}
	const Point & operator++() // ÀüÀ§ ++
	{
		++x;
		++y;
		return *this;
	}
	const Point operator++(int)
	{
		Point pt(x,y);
		++x;
		++y;
		return pt;
	}
};

int main(void)

{
	Point p1(2, 3), p2(2, 3);
	Point result;
	result = ++p1;
	p1.print();
	result.print();

	result = p2++;
	p2.print();
	result.print();

	return 0;
}
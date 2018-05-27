#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0):x(_x),y(_y) {}
	void print()
	{
		cout << x << "," << y << endl;
	}
	int GetX() const
	{
		return x; // xÀÇ getter
	}
	int GetY() const
	{
		return y; // yÀÇ getter
	}

	const Point operator-(const Point &arg) const
	{
		return Point(x - arg.x, y - arg.y);
	}
};

int main(void)
{
	Point p1(2, 3), p2(5, 5), p3;
	p3 = p1 - p2;
	p3.print();
	return 0;
}
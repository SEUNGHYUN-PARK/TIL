#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print()
	{
		cout << x << "," << y << endl;
	}
	void operator+(Point &arg)
	{
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;
	}
};

int main()
{
	Point p1(2, 3), p2(3, 4);
	p1 + p2;
	return 0;
}
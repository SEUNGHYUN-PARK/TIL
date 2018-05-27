#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print() const 
	{
		cout << x << ',' << y << endl;
	}
	const Point operator+(const Point &args)const
	{
		Point pt;
		pt.x = this->x + args.x;
		pt.y = this->y + args.y;

		return pt;
	}
};

int main()
{
	Point pt(2, 3), pt2(5, 5);
	Point pt3;

	pt3 = pt + pt2;
	pt3.print();
	pt3 = pt.operator+(pt2);
	pt3.print();

	return 0;
}
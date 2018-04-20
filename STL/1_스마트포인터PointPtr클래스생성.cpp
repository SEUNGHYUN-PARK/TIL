#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	Point(int _x, int _y) :x(_x), y(_y)
	{
	}
	void print()const
	{
		cout << x << "," << y << endl;
	}
};
class PointPtr
{
	Point *ptr;
public:
	PointPtr(Point *p) : ptr(p) {}
	~PointPtr()
	{
		delete ptr;
	}
	Point * operator->() const
	{
		return ptr;
	}
};

int main()
{
	PointPtr p1 = new Point(2, 3); //메모리 할당
	PointPtr p2 = new Point(5, 5); //메모리 할당

	p1->print();
	p2->print();


}
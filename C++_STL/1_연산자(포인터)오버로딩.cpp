#include <iostream>
using namespace std;

class Point 
{
	int x, y;
public:
	Point(int _x, int _y) :x(_x), y(_y) {}
	void print()const 
	{
		cout << x << "," << y << endl;
	}
};

class Pointptr
{
	Point *ptr;
public:
	Pointptr(Point *p) :ptr(p) {}
	~Pointptr()
	{
		delete ptr;
	}
	Point* operator->() const
	{
		return ptr;
	}
	Point& operator*() const
	{
		return *ptr;
	}
};

int main()
{
	Point *p1 = new Point(2, 3);
	Pointptr p2 = new Point(5, 5);

	p1->print();
	p2->print();
	cout << endl;

	(*p1).print();
	(*p2).print();
	delete p1;
	return 0;
}
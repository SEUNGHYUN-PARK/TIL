#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print() const{ cout << x << "," << y << endl; }
	void printint(int n) { cout << "테스트정수 : "<<n<< endl; }
};
int main()
{
	Point pt(2.3);
	Point *p = &pt;
	void (Point::*pf1)() const;
	pf1 = &Point::print;
	void(Point::*pf2)(int);
	pf2 = &Point::printint;


	pt.print();
	pt.printint(10);
	cout << endl;

	(pt.*pf1)();
	(pt.*pf2)(10);
	cout << endl;

	(p->*pf1)();
	(p->*pf2)(10);

	return 0;

}
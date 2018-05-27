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
		cout << x << "," << y << endl;
	}
};
int main()
{
	Point *p1 = new Point(2, 3);
	Point *p2 = new Point(5,5);

	p1->print();
	p2->print();

	delete p1;
	delete p2;
}
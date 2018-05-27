#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print() const
	{
		cout << x << "," << y << endl;
	}
};

int main()
{
	Point pt;
	pt.print();
	pt = 10;
	pt.print();

	return 0;
}
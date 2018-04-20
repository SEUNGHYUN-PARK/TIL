#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0):x(_x),y(_y) {}
	void print() const
	{
		cout << x << "," << y << endl;
	}
	operator int() const
	{
		return x;
	}
};

int main()
{
	int n = 10;
	Point pt(2.3);
	n = pt;
	cout << n << endl;
	return 0;
}
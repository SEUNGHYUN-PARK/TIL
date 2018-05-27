#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print()const { cout << x << "," << y << endl;}
	int operator[](int idx) const
	{
		if (idx == 0)
			return x;
		else if (idx == 1)
			return y;
		else
			throw "이럴 수는 없는 거야";

	}

};

int main()
{
	Point pt(1, 2);
	pt.print();
	cout << pt[0] << ',' << pt[1] << endl;
	cout << pt.operator[](0) << ',' << pt.operator[](1) << endl;
	return 0;

}
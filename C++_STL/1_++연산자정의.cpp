#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int _x, int _y) : x(_x), y(_y) {}
	void print()
	{
		cout << x<< "," << y << endl;
	}
	void operator++() // ���� ������
	{

	}
	void operator++(int) // ���� ������
	{

	}
};

int main(void)
{
	Point p1(2, 3), p2(2, 3);
	++p1;
	p2++;

	return 0;
}
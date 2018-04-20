#include <iostream>
using namespace std;

class Point 
{
private:
	int x;
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	void print() const
	{
		cout << x << "," << y;
	}
	bool operator == (const Point &pt) const
	{
		return x == pt.x && y == pt.y ? true : false;
	}
};
int main()
{
	Point pt1(2, 3), pt2(5, 5), pt3(2, 3);
	if (pt1 == pt2)
		cout << "pt1==pt2" << endl;
	if (pt1 == pt3)
		cout << "pt1==pt3" << endl;

	return 0;
	

}
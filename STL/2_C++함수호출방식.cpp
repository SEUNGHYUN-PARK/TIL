#include <iostream>
using namespace std;

void print()
{
	cout << "정적 함수 print()" << endl;

}
class Point
{
	int x, y;
public:
	void print()
	{
		cout << "멤버함수 print() 호출" << endl;
	}
};

int main()
{
	Point pt;
	Point *p = &pt;

	print();
	pt.print();
	p->print();
	return 0;
}
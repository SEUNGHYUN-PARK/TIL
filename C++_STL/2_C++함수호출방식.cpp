#include <iostream>
using namespace std;

void print()
{
	cout << "���� �Լ� print()" << endl;

}
class Point
{
	int x, y;
public:
	void print()
	{
		cout << "����Լ� print() ȣ��" << endl;
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
#include <iostream>
using namespace std;

//템플릿이 만능은 아니다 객체 출력은 불가능

class Point
{
	int x, y;
public:
	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	void print() const
	{
		cout << x << "," << y << endl;
	}
};
template <typename T>
void Print(T a)
{
	cout << a << endl;
}

int main()
{
	int n = 10;
	double d = 2.5;
	Point pt(2, 3);
	Print(n);
	Print(d);
	//Print(pt); // 에러! cout<<pt연산이 불가능하므로

	return 0;
}
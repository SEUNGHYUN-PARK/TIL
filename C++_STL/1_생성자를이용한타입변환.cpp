#include <iostream>
using namespace std;

class A
{
};
class B
{
public:
	B() { cout << "B()持失切" << endl; }
	B(A& _a) { cout << "B(A& _a) 持失切" << endl; }
	B(int n) { cout << "B(int n) 持失切" << endl; }
	B(double d) { cout << "B(double d) 持失切" << endl; }
};
int main()
{
	A a;
	int n = 10;
	double d = 5.5;


	B b(a),b(n),b(d);
	b = a;
	b = n;
	b = d;


	

	return 0;
}
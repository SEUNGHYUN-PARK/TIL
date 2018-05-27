#include <iostream>
#include <functional>
using namespace std;

typedef less<int> Less;

int main()
{
	Less l;
	cout << l(10, 20) << endl;
	cout << l(20, 10) << endl;
	cout << l.operator()(10, 20) << endl;
	cout << endl;
	cout << Less()(10, 20) << endl;
	cout << Less()(20, 10) << endl;
	cout << Less().operator()(10, 20) << endl;
}
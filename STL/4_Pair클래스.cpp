#include <iostream>
#include <string>
using namespace std;

template<typename T1, typename T2>
struct Pair
{
	T1 first;
	T2 Second;
	Pair(const T1& ft, const T2& sd) :first(ft), Second(sd) {}
};

int main()
{
	Pair<int, int>p1(10, 20);
	cout << p1.first << "," << p1.Second << endl;
	Pair<int, string>p2(1, "one");
	cout << p2.first << "," << p2.Second << endl;
	cout << endl;

	pair<int, int >p3(10, 20);
	cout << p3.first << "," << p3.second << endl;
	pair<int, string>p4(1, "one");
	cout << p4.first << "," << p4.second << endl;
}
#include <iostream>
#include <list>
#include <functional>

using namespace std;

struct Greater
{
	bool operator()(int n1, int n2) const
	{
		return n1 > n2;
	}
};
int main(void)
{
	list<int> lt;
	lt.push_back(20);
	lt.push_back(10);
	lt.push_back(50);
	lt.push_back(30);
	lt.push_back(40);
	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	lt.sort(greater<int>());
	for (iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	lt.sort(less<int>());
	for (iter = lt.begin();iter != lt.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	lt.sort(Greater());
	for (iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	return 0;
}
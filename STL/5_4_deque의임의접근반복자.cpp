#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;

	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);

	deque<int>::iterator iter = dq.begin();
	for (int i = 0; i < 5; i++)
		cout << iter[i] << endl;
	cout << endl;

	iter += 2;
	cout << *iter << endl;
	cout << endl;

	deque<int>::iterator iter2 = iter + 2;
	cout << *iter2 << endl;
}

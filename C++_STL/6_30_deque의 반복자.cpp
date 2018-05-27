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

	deque<int>::iterator diter;
	for (diter = dq.begin(); diter != dq.end(); diter++)
		cout << *diter <<" ";
	cout << endl;

	diter = dq.begin() + 2; // 반복자에 +2합니다.
	cout << *diter <<" ";
	diter += 2;	//반복자에 +2합니다.
	cout << *diter << " ";
	diter -= 3; // 반복자에 -3합니다.
	cout << *diter << " ";
	return 0;
}

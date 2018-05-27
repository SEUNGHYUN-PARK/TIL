#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v(4,100); // 100으로 초기화한 4개의 원소를 갖는 컨테이너v
	deque<int> dq(4,100); // 100으로 초기화한 4개의 원소를 갖는 컨테이너dq

	v.push_back(200); //v에 200추가
	dq.push_back(200); // dq에 200추가

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	for (deque<int>::iterator diter = dq.begin(); diter != dq.end(); diter++)
		cout << *diter << " ";
	cout << endl;

	return 0;

}
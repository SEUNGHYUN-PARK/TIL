#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v(4,100); // 100���� �ʱ�ȭ�� 4���� ���Ҹ� ���� �����̳�v
	deque<int> dq(4,100); // 100���� �ʱ�ȭ�� 4���� ���Ҹ� ���� �����̳�dq

	v.push_back(200); //v�� 200�߰�
	dq.push_back(200); // dq�� 200�߰�

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	for (deque<int>::iterator diter = dq.begin(); diter != dq.end(); diter++)
		cout << *diter << " ";
	cout << endl;

	return 0;

}
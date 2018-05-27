#include <iostream>
#include <vector>
#include <list>
using namespace std;


int main(void)
{
	list<int> lt;
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(10);
	lt.push_back(40);
	lt.push_back(50);
	lt.push_back(10);
	lt.push_back(10);

	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter <<" ";
	cout << endl;//10 20 30 10 40 50 10 10 

	lt.remove(10); // ������ ���� 10�� �͵鸸 �� ����
	for (iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	return 0;

}
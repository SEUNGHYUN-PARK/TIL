#include <iostream>
#include <set>
using namespace std;

int main(void)
{
	set<int> s;
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	set<int>::iterator iter;
	
	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	iter = s.find(30); // iter�� 30�� ã�� ������! ���� �Ȱ���Ű�� end�� ������ �̴� ���°ž� �˰���?
	if (iter != s.end())
		cout << *iter << " �� s�� �ִ�!" << endl;
	else
		cout << *iter << " �� s�� ����!" << endl;

	return 0;

}
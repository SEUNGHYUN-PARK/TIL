#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int> s;
	pair<set<int>::iterator,bool> pr; // �¿� ���� �־����� �������θ� �������ִ� ���
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	pr = s.insert(90); // 90�� ���������� �����ߴ��� �����ߴ��� ���

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	if (pr.second == true)
		cout << *pr.first << " ���� ����!" << endl;
	else
		cout << *pr.first << " ������ �����Ͽ����ϴ�." << endl;

	s.insert(pr.first, 85); // 90 ������ �ݺ��ڿ��� �˻� ������ ����

	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	return 0;

}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin();
	vector<int>::const_iterator citer = v.begin();

	cout << *iter << endl; // ����Ű�� ������ ����
	cout << *citer << endl; //����Ű�� ������ ��� ����
	cout << *++iter << endl; //�������ҷ� �̵��ϴ� ������ ����
	cout << *++citer << endl; // �������ҷ� �̵��� ������ ��� ����
	*iter = 100;// �Ϲݹݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ����
	//*citer = 100;//����ݺ��ڴ� ����Ű�� ���Ҹ� ������ �� ����
	cout << *iter << endl;
	return 0;

}
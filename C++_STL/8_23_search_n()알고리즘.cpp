#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> ::iterator iter;
	iter = search_n(v.begin(), v.end(), 3, 30); // ���ۺ��� ������ 30�̶�� ���Ұ� 3�������� ���� ã����!
	if (iter != v.end()) //���� ã������
	{
		cout << "iter : " << *iter << endl; //�̰͵� ���� ������ġ�� ��ȯ�ϴ±�!
		cout << "iter-1" << *(iter - 1) << endl;
		cout << "iter+1" << *(iter + 1) << endl;
	}

	return 0;
}
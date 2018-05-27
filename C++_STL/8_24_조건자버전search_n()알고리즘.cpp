#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool Pred(int left, int right)
{
	return abs(right - left) <= 5;
}
int main()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(32);
	v.push_back(28);
	v.push_back(33);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter;
	iter = search_n(v.begin(), v.end(), 3, 30, Pred); // 30���� ���̰� 5������ ���Ұ� 3���̻� ������ ù������ �ݺ���
	if (iter != v.end())//���� ã�������
	{
		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;
	}

	return 0;
}
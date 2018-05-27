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
	iter = search_n(v.begin(), v.end(), 3, 30, Pred); // 30과의 차이가 5이하인 원소가 3번이상 연속한 첫원소의 반복자
	if (iter != v.end())//만약 찾았을경우
	{
		cout << "iter : " << *iter << endl;
		cout << "iter-1 : " << *(iter - 1) << endl;
		cout << "iter+1 : " << *(iter + 1) << endl;
	}

	return 0;
}
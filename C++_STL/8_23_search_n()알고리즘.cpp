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
	iter = search_n(v.begin(), v.end(), 3, 30); // 시작부터 끝까지 30이라는 원소가 3번나오는 곳을 찾아줘!
	if (iter != v.end()) //만약 찾았으면
	{
		cout << "iter : " << *iter << endl; //이것도 역시 시작위치를 반환하는군!
		cout << "iter-1" << *(iter - 1) << endl;
		cout << "iter+1" << *(iter + 1) << endl;
	}

	return 0;
}
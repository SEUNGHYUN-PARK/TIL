#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main()
{
	set<int, greater<int>> s; // 정렬기준으로 grater<int> 조건자를 사용

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);
	//greater<int>조건자를 사용하는 반복자 생성
	set<int, greater<int>>::iterator iter; // 반복자는 원래 set과 똑같은 형태여야함
	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	return 0;


}
#include <iostream>
#include <set>
using namespace std;
int main()
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

	pair<set<int>::iterator, set<int>::iterator>iter_pair;
	//반복자 쌍의 pair 객체(왼쪽이 로우바운드 오른쪽이 어퍼바운드)
	iter_pair = s.equal_range(30);
	cout << *iter_pair.first << endl;
	cout << *iter_pair.second << endl;

	iter_pair = s.equal_range(55);
	cout << *iter_pair.first << endl;// 없으면 그 다음거를 참조하는구나
	cout << *iter_pair.second << endl; // 없으면 first가 가르키는거를 바라보고있구나

	if (*iter_pair.first != *iter_pair.second)
		cout << "55가 s에 있음!";
	else
		cout << "55가 s에 없음!";

	return 0;
}
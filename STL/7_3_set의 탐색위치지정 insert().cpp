#include <iostream>
#include <set>

using namespace std;

int main(void)
{
	set<int> s;
	pair<set<int>::iterator,bool> pr; // 셋에 값을 넣었을때 성공여부를 저장해주는 페어
	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	pr = s.insert(90); // 90을 삽입했을때 성공했는지 실패했는지 출력

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	if (pr.second == true)
		cout << *pr.first << " 삽입 성공!" << endl;
	else
		cout << *pr.first << " 삽입을 실패하였습니다." << endl;

	s.insert(pr.first, 85); // 90 원소의 반복자에서 검색 시작후 삽입

	for (iter = s.begin(); iter != s.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	return 0;

}
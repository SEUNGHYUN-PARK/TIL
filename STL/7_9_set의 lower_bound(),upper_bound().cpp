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

	set<int>::iterator iter_upper;
	set<int>::iterator iter_lower;
	iter_lower = s.lower_bound(30); //30 그 값을 가리켜!
	iter_upper = s.upper_bound(30); // 30 바로 그 다음값을 가리켜!
	cout << *iter_lower << endl;
	cout << *iter_upper << endl;

	iter_lower = s.lower_bound(55);
	iter_upper = s.upper_bound(55);

	if (iter_lower != iter_upper)
		cout << "55가 s에 있음!" << endl;
	else
		cout << "55가 s에 없음!" << endl; //찾아보니 없는데 그 다음거도 없지
	return 0;
}
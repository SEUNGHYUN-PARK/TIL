#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main()
{
	set<int, less<int> > s_less; // set<int> s와 같음
	set<int, greater<int>> s_greater; // 정렬기준으로 greaer<int> 조건자를 사용

	s_less.insert(50);
	s_less.insert(80);
	s_less.insert(40); //40 50 80

	s_greater.insert(50);
	s_greater.insert(80);
	s_greater.insert(40); //80 50 40

	set<int, less<int>>::key_compare l_cmp = s_less.key_comp();
	cout << l_cmp(10, 20) << endl;

	set<int, greater<int>>::key_compare g_cmp = s_greater.key_comp();
	cout << g_cmp(10, 20) << endl;
	cout << "key_compare type : " << typeid(s_less.key_comp()).name() << endl;
	cout << "key_compare type : " << typeid(s_greater.key_comp()).name() << endl;
	cout << "value_compare type : " << typeid(s_less.value_comp()).name() << endl;
	cout << "value_compare type : " << typeid(s_greater.value_comp()).name() << endl;

	return 0;
}
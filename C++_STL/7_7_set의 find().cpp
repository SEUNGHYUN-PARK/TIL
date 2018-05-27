#include <iostream>
#include <set>
using namespace std;

int main(void)
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

	iter = s.find(30); // iter는 30을 찾아 가리켜! 만약 안가리키고 end로 갔으면 이는 없는거야 알겠지?
	if (iter != s.end())
		cout << *iter << " 가 s에 있다!" << endl;
	else
		cout << *iter << " 가 s에 없다!" << endl;

	return 0;

}
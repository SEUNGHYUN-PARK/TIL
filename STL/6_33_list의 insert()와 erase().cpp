#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<int> lt;
	lt.push_back(10); // 10
	lt.push_back(20); // 10 20
	lt.push_back(30); // 10 20 30
	lt.push_back(40); // 10 20 30 40
	lt.push_back(50); // 10 20 30 40 50

	list<int>::iterator iter = lt.begin(); //10
	list<int>::iterator iter2;

	++iter; //20
	++iter; //30

	iter2 = lt.erase(iter); //30을 없애면 그 다음거를
	for (iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << " "; // 10 20 40 50
	cout << endl;

	cout <<"iter2 : "<< *iter2 <<endl; // 30없애고나면 40만 존재하니까

	iter = iter2; // lt.begin()+2
	iter2 = lt.insert(iter, 300);//300
	for (iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << " ";//10 20 300 40 50

	cout << endl;
	cout << "iter2 : " << *iter2 << endl; // 300
	return 0;
}
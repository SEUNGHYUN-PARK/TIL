#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(10);
	lt1.push_back(20);
	lt1.push_back(30);
	lt1.push_back(40);
	lt1.push_back(50);

	lt2.push_back(15);
	lt2.push_back(25);
	lt2.push_back(35);

	list<int>::iterator iter;
	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
		cout << *iter <<" ";
	cout << endl;

	cout << "===========================================\n";
	
	lt1.merge(lt2); // 두 배열이 정렬되있는 상태여야 가능
	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
		cout << *iter <<" ";
	cout << endl;

	cout << "lt2 ; ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
		cout << *iter <<" ";
	cout << endl;

	return 0;
}
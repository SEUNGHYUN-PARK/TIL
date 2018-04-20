#include <iostream>
#include <list>
#include <functional>
using namespace std;

int main(void)
{
	list<int> lt1;
	list<int> lt2;

	lt1.push_back(50);
	lt1.push_back(40);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(10);

	/*
	lt2.push_back(25);
	lt2.push_back(35):
	lt2.push_back(60);
	*/

	//lt1,lt2는 정렬방식이 같아야함
	//greater 조건식(>연산)정렬기준사용
	lt2.push_back(60);
	lt2.push_back(35);
	lt2.push_back(25);

	list<int>::iterator iter;
	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
		cout << *iter << " ";
	cout << endl << "=======================================" << endl;

	lt1.merge(lt2, greater<int>());

	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
		cout << *iter << " ";
	cout << endl;

}
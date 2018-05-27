#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	list<int> lt;

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);
	 
	vector<int>::iterator viter = v.begin();
	list<int>::iterator liter = lt.begin();

	viter++;//20
	liter++;//20

	viter = v.insert(viter, 600); // 20ÀÚ¸®¿¡ 600 »ğÀÔ
	liter = lt.insert(liter, 600); // 20ÀÚ¸®¿¡ 600 »ğÀÔ
	cout << "vector : " << *viter << endl; //600
	cout << "list : " << *liter << endl; //600

	cout << "vector : ";
	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	

	cout << "list : ";
	for (list<int>::iterator iter2 = lt.begin(); iter2 != lt.end(); iter2++)
		cout << *iter2 << " ";
	cout << endl;







}
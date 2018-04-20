#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<int> dq;
	
	for (deque<int>::size_type i = 0; i < 10; i++)
		dq.push_back((i + 1) * 10); //10 20 30 40 50 60 70 80 90 100

	deque<int>::iterator iter;
	deque<int>::iterator iter2;
	for (iter = dq.begin(); iter != dq.end(); iter++)
		cout << *iter <<" "; 
	cout << endl;

	iter = dq.begin() + 2; //30
	iter2 = dq.insert(iter, 500); 
	cout << *iter2<<" "; // 500
	cout << endl;

	for (deque<int>::size_type i = 0; i < dq.size(); i++)
		cout << dq[i] << " ";
	cout << endl;// 10 20 500 30 40 50 60 70 80 90 100

}
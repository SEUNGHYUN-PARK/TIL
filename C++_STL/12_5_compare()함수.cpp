#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1("ABCDE");
	string s2("AKABC");
	const char* sz = "AKABC";
	//s:string��ü,sz='\0'���ڿ�,off:������ġ,n:����
	cout << s1.compare(s2) << endl; // s1�� s2�� ����
	cout << s1.compare(2, 3, s2) << endl;
	cout << s1.compare(0, 3, s2, 2, 3) << endl;
	cout << s1.compare(sz) << endl;
	cout << s1.compare(2, 3, sz) << endl;
	cout << s1.compare(0, 1, sz, 1) << endl;

	return 0;
}
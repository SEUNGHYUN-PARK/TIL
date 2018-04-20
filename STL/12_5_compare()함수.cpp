#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1("ABCDE");
	string s2("AKABC");
	const char* sz = "AKABC";
	//s:string객체,sz='\0'문자열,off:시작위치,n:길이
	cout << s1.compare(s2) << endl; // s1과 s2를 비교해
	cout << s1.compare(2, 3, s2) << endl;
	cout << s1.compare(0, 3, s2, 2, 3) << endl;
	cout << s1.compare(sz) << endl;
	cout << s1.compare(2, 3, sz) << endl;
	cout << s1.compare(0, 1, sz, 1) << endl;

	return 0;
}
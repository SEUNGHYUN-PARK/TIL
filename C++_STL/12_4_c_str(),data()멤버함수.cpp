#include <iostream>
#include<string>
using namespace std;

int main(void)
{
	string s("Hello!");
	const char *sz;
	const char *buf;

	sz = s.c_str();
	buf = s.data();

	cout << "널 문자로 끝나는 문자열 (C_STYLE) : " << sz << endl;
	cout << "널 문자로 안끝나는 문자열 : " << buf << endl;

	for (string::size_type i = 0; i < s.size(); i++)
		cout << buf[i];
	cout << endl;

}
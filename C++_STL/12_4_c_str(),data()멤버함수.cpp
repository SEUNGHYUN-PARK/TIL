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

	cout << "�� ���ڷ� ������ ���ڿ� (C_STYLE) : " << sz << endl;
	cout << "�� ���ڷ� �ȳ����� ���ڿ� : " << buf << endl;

	for (string::size_type i = 0; i < s.size(); i++)
		cout << buf[i];
	cout << endl;

}
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s("Hello!");
	char buf[100];
	//주의점:copy()는 끝에 '\0'문자를 포함하지않는다.
	s.copy(buf,s.length()); //length()는 size()와 같다.
	buf[s.length()] = '\0';
	cout << "전체 문자열[copy(buf,n)]" << buf << endl;
	s.copy(buf, 4, 2);
	buf[4] = '\0';
	cout << "부분 문자열 : " << buf << endl;
}
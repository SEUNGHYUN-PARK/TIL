#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string t("Hello!");
	const char *p1 = "Hello!";
	const char *p2 = p1 + 6;

	string s1, s2, s3, s4, s5, s6, s7, s8, s9;

	s1.assign(t);
	s2.assign(t, 0, 6);
	s3.assign("Hello!");
	s4.assign("Hello!", 6);
	s5.assign(6, 'H');
	s6.assign(t.begin(), t.end());
	s7.assign(p1, p2);
	s8 = t;
	s9 = "Hello!";

	cout << "s1 : " << s1 << endl;
	cout << "s2 : " << s2 << endl;
	cout << "s3 : " << s3 << endl;
	cout << "s4 : " << s4 << endl;
	cout << "s5 : " << s5 << endl;
	cout << "s6 : " << s6 << endl;
	cout << "s7 : " << s7 << endl;
	cout << "s8 : " << s8 << endl;
	cout << "s9 : " << s9 << endl;

}
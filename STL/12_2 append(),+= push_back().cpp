#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1("He");
	string s2("He");
	string s3("He");
	string s4("He");
	string s5("He");
	string s6("He");
	string s7("He");
	string s8("He");
	string s9("He");
	string s10("He");

	string t("llo!");
	const char*p1 = "llo!";
	const char *p2 = p1 + 4;
	s1.append(t); //He+llo!
	s2.append(t, 0, 4);//He+llo!
	s3.append("llo!");//He+llo!
	s4.append("llo!", 4);//He+llo!
	s5.append(t.begin(), t.end());// He+llo!
	s6.append(p1, p2);// He+llo!
	s7.append(5, 'H');// He+HHHHH
	s8 += t;// He+llo!
	s9 += "llo!";// He+llo!

	for (string::iterator iter = t.begin(); iter != t.end(); iter++)
		s10.push_back(*iter);//He+l+l+o+!
	//s:string객체, sz:'\0'문자열, c:문자  off:시작위치, n=길이
	//iter:반복자, p:포인터
	cout << "s1 : "<< s1 << endl;
	cout << "s2 : " << s2 << endl;
	cout << "s3 : " << s3 << endl;
	cout << "s4 : " << s4 << endl;
	cout << "s5 : " << s5 << endl;
	cout << "s6 : " << s6 << endl;
	cout << "s7 : " << s7 << endl;
	cout << "s8 : " << s8 << endl;
	cout << "s9 : " << s9 << endl;
	cout << "s10 : " << s10 << endl;

}

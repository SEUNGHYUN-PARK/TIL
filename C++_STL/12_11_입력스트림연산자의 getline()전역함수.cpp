#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1, s2;

	//cin>>buf와 같다.
	//cout<<"두문자열 입력"<<endl;
	//cin>>s1>>s2;
	//cout<<s1<<s2<<endl;

	//cin.getline(buf)와 같다.
	cout << "두 문자열 입력(공백 문자 가능) : " << endl;
	getline(cin, s1);
	getline(cin, s2,'b');
	cout << s1 << endl;
	cout << s2 << endl;
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s1, s2;

	//cin>>buf�� ����.
	//cout<<"�ι��ڿ� �Է�"<<endl;
	//cin>>s1>>s2;
	//cout<<s1<<s2<<endl;

	//cin.getline(buf)�� ����.
	cout << "�� ���ڿ� �Է�(���� ���� ����) : " << endl;
	getline(cin, s1);
	getline(cin, s2,'b');
	cout << s1 << endl;
	cout << s2 << endl;
	return 0;
}

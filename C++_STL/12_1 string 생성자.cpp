#include <iostream>
#include <string>
using namespace std;

int main()
{
	string t("Hello!");//�ӽù��ڿ�
	const char* p1 = "Hello!";
	const char * p2 = p1 + 3; // �׳� +N�� ������ ���� ���ڼ��̴ϱ� 3���� �߰�

	string s1;
	string s2("Hello!");
	string s3("Hello!", 2);
	string s4(5, 'H');
	string s5(t.begin(), t.end()); //�ݺ��� ��
	string s6(p1, p2);//������ ��

	//s:string��ü sz:'\0'���ڿ�,c:����,n:����, iter:�ݺ���, p:������
	cout << "s1() : " << s1 << endl; //s1��� �ƹ��͵� �����ϱ� �׳� ����� �ȵ�
	cout << "s2(sz) : " << s2 << endl; // s2��� �ʱ�ȭ�� Hello!�� �����ϱ� Hello!���
	cout << "s3(sz,n) : " << s3 << endl; //Hello!���� �α��ڸ� ������ �׷��� He
	cout << "s4(n,c) : " << s4 << endl; //5���ݺ���, H���
	cout << "s5(iter1,iter2) : " << s5 << endl; // �ӽù��ڿ��� ���ۺ��� ������ �����!
	cout << "s6(p1, p2)" << s6 << endl; // �����ּҷ� ���� p1+6���� �����! �׷��� Hello!
}
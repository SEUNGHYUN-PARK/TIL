#include <iostream>
#include <string>
using namespace std;

int main()
{
	string t("Hello!");//임시문자열
	const char* p1 = "Hello!";
	const char * p2 = p1 + 3; // 그냥 +N은 시작점 기준 글자수이니까 3글자 추가

	string s1;
	string s2("Hello!");
	string s3("Hello!", 2);
	string s4(5, 'H');
	string s5(t.begin(), t.end()); //반복자 쌍
	string s6(p1, p2);//포인터 쌍

	//s:string객체 sz:'\0'문자열,c:문자,n:길이, iter:반복자, p:포인터
	cout << "s1() : " << s1 << endl; //s1출력 아무것도 없으니까 그냥 출력이 안됨
	cout << "s2(sz) : " << s2 << endl; // s2출력 초기화로 Hello!가 있으니까 Hello!출력
	cout << "s3(sz,n) : " << s3 << endl; //Hello!에서 두글자만 뽑을게 그래서 He
	cout << "s4(n,c) : " << s4 << endl; //5번반복해, H출력
	cout << "s5(iter1,iter2) : " << s5 << endl; // 임시문자열의 시작부터 끝까지 출력해!
	cout << "s6(p1, p2)" << s6 << endl; // 시작주소로 부터 p1+6까지 출력해! 그래서 Hello!
}
#include <iostream>
using namespace std;

void client();
void printhello()
{
	cout << "hello!" << endl;
	client();
	
}
void client()
{
	cout << "�� Ŭ���̾�Ʈ!" << endl;
}
int main()
{
	printhello();
	return 0;
}
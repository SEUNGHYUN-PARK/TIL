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
	cout << "난 클라이언트!" << endl;
}
int main()
{
	printhello();
	return 0;
}
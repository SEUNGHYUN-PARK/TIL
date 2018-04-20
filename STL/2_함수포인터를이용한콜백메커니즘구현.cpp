#include <iostream>
using namespace std;

void for_each(int *begin, int *end, void(*pf)(int))
{
	while (begin != end)
	{
		pf(*begin++);
	}
}
void print1(int n)
{
	cout << n << ' ';
}
void print2(int n)
{
	cout << n*n << " ";
}
void print3(int n)
{
	cout << "Á¤¼ö : " << n << endl;
}

int main()
{
	int arr[5] = { 10,20,30,40,50 };

	for_each(arr, arr + 5, print1);
	cout << endl << endl;
	for_each(arr, arr + 5, print2);
	cout << endl << endl;
	for_each(arr, arr + 5, print3);
	cout << endl << endl;
	
	return 0;
}
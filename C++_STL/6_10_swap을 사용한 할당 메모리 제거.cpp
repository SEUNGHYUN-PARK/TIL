#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	vector<int> v(5);
	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;
	vector<int>().swap(v);
	//기본생성자로 만든 vector컨테이너와 v컨테이너를 swap한다.
	cout << "size : " << v.size() << " capacity : " << v.capacity() << endl;

}
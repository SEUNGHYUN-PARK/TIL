#include <iostream>
#include <string>
using namespace std;

template <typename T>
class ObjectInfo
{
	T data;
public:
	ObjectInfo(const T& d) :data(d) {}
	void print()
	{
		cout << "타입 : " << typeid(data).name() << endl;
		cout << "크기 : " << sizeof(data) << endl;
		cout << "값 : " << data << endl;
		cout << endl;
	}
};

template <>
class ObjectInfo<string>
{
	string data;
public:
	ObjectInfo(const string& d) :data(d) {}
	void print()
	{
		//cout << "타입 : " << typeid(data).name() << endl;
		cout << "타입 : " << "string" << endl;
		//cout << "크기 : " << sizeof(data) << endl;
		cout << "문자열 길이 : " << data.size() << endl;
		cout << "값 : " << data << endl;
		cout << endl;

	}
};

int main()
{
	ObjectInfo<int> d1(10);
	d1.print();
	ObjectInfo<double> d2(5.5);
	d2.print();
	ObjectInfo<string> d3("Hello!");
	d3.print();

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	make_heap(v.begin(), v.end());
	cout << "v[Èü »ý¼º] : "; //º¤ÅÍ¸¦ ÅëÇØ ÀÏ´Ü ÈüÀ» ¸¸µé¾îÁà
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	v.push_back(35);
	cout << "v ¼øÂ÷¿­¿¡ 35 Ãß°¡ : "; // ±× ´ÙÀ½¿¡ º¤ÅÍ¿¡ 35¸¦ Ãß°¡ÇØÁà
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;

	push_heap(v.begin(), v.end()); // ±×·¯¸é ÈüÀÌ ±úÁö´Ï±î 35¸¦ Èü¿¡ ³Ö¾îÁà
	cout << "v[Èü Ãß°¡] ¿¬»ê ¼öÇà : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;



}
#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int, less<int>> s;

	//30과 50의 비교
	cout << ((!s.key_comp()(30,50)) && (!s.key_comp()(50,30)))<<endl;
	//30이 50보다 앞서있지 않고 50도 30보다 앞서있지않은가? false
	cout << ((!s.key_comp()(30, 30)) && (!s.key_comp()(50, 30))) << endl;
	//30이 30보다 앞서있지않고 30도 30보다 앞서있지않은가? true

	return 0;

}
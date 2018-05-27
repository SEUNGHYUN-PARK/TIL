#include <iostream>
#include <functional>
using namespace std;

int main(void)
{
	//less의 두번째 인자를 10으로 고정한 단항 조건자 binder설정
	//bind1st와 bind2nd는 첫번째 항을 고정할 것인지, 두번째 항을 고정할 것인지만 다를뿐 사용 방법은 같다.
	binder2nd<less<int>> binder = bind2nd(less<int>(), 10);

	//binder는 두 번째 인자를 10으로 고정한 less
	cout << binder(5) << ":" << less<int>()(5, 10) << endl;
	//두 문장이 같다.
	cout << binder(10) << ":" << less<int>()(10, 10) << endl;
	//두 문장이 같다.
	cout << binder(20) << ":" << less<int>()(20, 10) << endl;
	//두 문장이 같다.
	cout << "=====위와 같음=====" << endl;
	//임시객체사용
	cout << bind2nd(less<int>(), 10)(5) << ":" << less<int>()(5, 10) << endl;
	cout << bind2nd(less<int>(), 10)(10) << ":" << less<int>()(10, 10) << endl;
	cout << bind2nd(less<int>(), 10)(20) << ":" << less<int>()(20, 10) << endl;
	return 0;

}
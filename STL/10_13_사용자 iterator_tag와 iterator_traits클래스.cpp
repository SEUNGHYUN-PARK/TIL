#include <iostream>

//직접 짠 vector list 그리고 advacne() 함수
//에러가있는데 다음에 하자


//STL은 각 반복자형식을 확인하기위한 특징정보클래스인 iterator_traits 제공
template<class Iter>
struct iterator_traits
{
	typedef typename Iter::iterator_category iterator_category;
	typedef typename Iter::value_type value_type;
	typedef typename Iter::difference_type difference_type;
	typedef typename Iter::pointer pointer;
	typedef typename Iter::reference reference;
};

//STL은 각 반복자를 구분하기 위한 반복자 테그를 제공
struct input_iterator_tag {};
struct output_iterator_tag {};
struct forward_iterator_tag:public input_iterator_tag{};
struct bidirectional_iterator_tag :public forward_iterator_tag {};
struct random_access_iterator_tag:public bidirectional_iterator_tag{};

template<typename T>
class Vector
{
public:
	class Iterator//Vector의 반복자
	{
	public:
		//STL반복자는 아래 자신만의 다섯가지 정보를 가짐
		typedef random_access_iterator_tag iterator_category;
		typedef T value_type;
		typedef int difference_type;
		typedef T* pointer;
		typedef T& reference;
		//...
		void operator+=(int) {}
	};
	void Push_back(const T& data) {}
	Iterator Begin() { return Iterator(); }
};

template<typename T>
class List
{
public:
	class Iterator//List의 반복자
	{
	public:
		//STL반복자는 아래 자신만의 다섯가지 정보를 가짐
		typedef bidirectional_iterator_tag iterator_category;
		typedef T value_type;
		typedef int difference_type;
		typedef T* Pointer;
		typedef T& reference;
		//...
		void operator++() {}
	};
	void Push_back(const T& data) {}
	Iterator Begin() { return Iterator(); }
}; // 입력반복자, 출력반복자 혹은 순방향 반복자에 맞는 버전 구현

//앙뱡향 반복자 Advance() 오버로딩 버전
template<typename Iter>
void  _Advance(Iter& iter, int n, bidirectional_iterator_tag category_tag)
{
	for (int i = 0; i < n; i++)
		++iter;
	std::cout << "양방향 반복자 버전의 advance() ++iter실행" << std:: endl;
}

//임의 접근 반복자 Advance() 오버로딩 버전
template<typename Iter>
void _Advance(Iter& iter, int n, random_access_iterator_tag category_tag)
{
	iter += n;
	std::cout << "임의 접근 반복자 버전의 advance() iter += n 실행" << std::endl;
}

//Advance()반복자 보조함수
template<typename Iter>
void Advance(Iter& iter, int n)
{
	_Advance(iter,n, iterator_traits<Iter>::iterator_category());
}

int main()
{
	Vector<int> v;
	v.Push_back(10);
	v.Push_back(20);
	v.Push_back(30);

	List<int> lt;
	lt.Push_back(10);
	lt.Push_back(20);
	lt.Push_back(30);

	Vector<int>::Iterator viter(v.Begin());
	List<int>::Iterator liter(lt.Begin());
	Advance(viter, 2);// vector의 반복자 이동
	Advance(liter, 2);// list의 반복자 이동

	return 0;
}
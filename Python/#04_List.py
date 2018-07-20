'''
List 또는 Array
시퀀스 자료형, 여러 데이터들의 집합
int, float 같은 다양한 데이터 타입 지원
'''

'''
인덱싱
list에 있는 값들은 주소를 가짐
주소를 사용해 할당된 값을 호출
'''
colors=['red','blue','green']
print(colors[0]) # 인덱싱
print(colors[1])
print(colors[2])
print(len(colors))

'''
슬라이싱
list의 값들을 잘라서 쓰는 것이 슬라이싱
'''
>>> cities =['서울','부산','인찬','대구','대전','광주','울산','수원']
>>> cities[0:6] #0번부터 5번까지[0:6)이라 생각하믄됨
['서울', '부산', '인찬', '대구', '대전', '광주']
>>> cities[:] #리스트의 처음부터 끝까지
['서울', '부산', '인찬', '대구', '대전', '광주', '울산', '수원']
>>> cities[-50:50] # 범위를 넘어갈 경우 자동으로 최대 범위를 지정
['서울', '부산', '인찬', '대구', '대전', '광주', '울산', '수원']
>>> cities[::2] # 첫 시작점을 기준으로 두칸 간격으로 집어냄
['서울', '인찬', '대전', '울산']

'''
리스트 연산
인덱싱,슬라이싱,연산 등 활용
'''
>>> color= ['red','green','blue']
>>> color
['red', 'green', 'blue']
>>> color2 = ['orange','black','white']
>>> color2
['orange', 'black', 'white']
>>> print(color+color2) #두 리스트 합치기
['red', 'green', 'blue', 'orange', 'black', 'white']
>>> len(color) #리스트 길이
3
>>> color[0]='yellow' # 0번째 리스트의 값 변경
>>> print(color*2) #color 리스트 2회 반복
['yellow', 'green', 'blue', 'yellow', 'green', 'blue']
>>> 'blue' in color2 # 문자열 'blue'가 color2 존재여부 반환
False
>>> total_color = color+color2
>>> total_color
['yellow', 'green', 'blue', 'orange', 'black', 'white']


'''
리스트 추가와 삭제
append,extend,insert,remove,del 등 활용
'''
>>> color.append("white") #리스트에 white 추가
>>> color.extend(["black","purple"])# 리스트에 새로운 리스트 추가
>>> color.insert(0,"orange") # 0번째 주소에 'orange'추가
>>> color
['orange', 'yellow', 'green', 'blue', 'white', 'black', 'purple']
>>> color.remove("white") # 리스트에 'white' 삭제
>>> color
['orange', 'yellow', 'green', 'blue', 'black', 'purple']
>>> del color[0] # 0번째 주소리스트 객체 삭제
>>> color
['yellow', 'green', 'blue', 'black', 'purple']

'''
Python 리스트만의 특징
다양한 Data Type이 하나의 List에 들어감
'''
>>> a=["color",1,0.2]
>>> color=['yellow','blue','green','black','purple']
>>> a[0]=color # 리스트 안에 리스트도 입력 가능
>>> print(a)
[['yellow', 'blue', 'green', 'black', 'purple'], 1, 0.2]


'''
= 의 의미는 같다가 아닌 메모리 주소에 해당 값을 할당(연결)한다는 의미
'''
>>> a=[5,4,3,2,1]
>>> b=[1,2,3,4,5]
>>> a==b
False
>>> b=a
>>> print(b)
[5, 4, 3, 2, 1]
>>> a==b
True
>>> a.sort()
>>> print(b)
[1, 2, 3, 4, 5]
>>> b=[6,7,8,9,10]
>>> print(a,b)
[1, 2, 3, 4, 5] [6, 7, 8, 9, 10]

'''
패킹과 언패킹
패킹 : 한 변수에 여러 개의 데이터를 넣는 것
언패킹 : 한 변수의 데이터를 각각의 변수로 반환
'''
>>> t=[1,2,3] # 1,2,3을 변수 t에 패킹
>>> a,b,c=t # t에 있는 값 1,2,3을 변수 a,b,c에 언패킹
>>> a,b,c
(1, 2, 3)
>>> a
1
>>> b
2
>>> c
3
>>> print(t,a,b,c) #[1,2,3],1,2,3
[1, 2, 3] 1 2 3

'''
이차원 리스트
리스트 안에 리스트를 만들어 행렬 생성
'''
>>> kor=[100,100,99,98,97]
>>> math=[100,100,100,100,100]
>>> eng=[100,80,90,85,97]
>>> midterm = [kor,math,eng]
>>> midterm
[[100, 100, 99, 98, 97], [100, 100, 100, 100, 100], [100, 80, 90, 85, 97]]
>>> print(midterm[0][3])
98

# input()함수는 콘솔창에서 문자열을 입력 받는 함수
print("Enter Your Name")
name = input() # input() 자체는 스트링을 받는다.
print("Hello", name ,".","How are you today?") # ','를 사용할 경우 ()안에 출력요소들을 이어서 넣을 수 있다.
print(type(name));
print()

#숫자를 받으려면 형변환을 해줘야한다
print("Choose One Number")
num = (int(input()));
print("출력하신 수는 ", num,"입니다")
print("출력한 수의 자료형은", type(num),"입니다")
print()

#실수입력에 대한 형변환
# input()함수 ()안에 내용을 넣으면 print("내용") 기능이 수행된다.
temperature = float(input("온도를 적어주세요"))
print("현재온도는 ",temperature,"입니다")
print()

# 섭씨 -> 화씨 변환기
print("본 프로그램은 섭씨를 화씨로 변환해주는 프로그램입니다")
cel = float(input("변환하고 싶은 섭씨 온도를 입력해 주세요 : "))
fah = ((9/5)*cel)+32
print("섭씨온도 : ",cel)
print("화씨온도 : ",fah)
print()

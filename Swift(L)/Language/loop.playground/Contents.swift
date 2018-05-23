//: Playground - noun: a place where people can play
//Swift에도 반복문은 두가지의 방법이 있다.
//While, for
//기본적으로 스위프트에서 루프선언시 ()를 선언하지않는다.
//Swift4에서는 ++을 지원하지않기때문에 +=로 해줘야한다
import UIKit

var age=0
while age<5
{
    age+=1 // ++을 지원하지 않기 때문에 +=를 이용함
    print(age)
}

let names = ["Anna","Kevin","Kelly","Jason"]
for name in names // C++의 포문으로 바꾸면 for(int i=0;i<4;i++) { printf("%s\n",names[i]) }
{
    print("Hello, \(name)")
}
// 어색할수도있겠으나, 잘 익히면 오히려 더 편리한 루프선언이 될거같다.

//전에 배웠던 Dictionar를 이용하여 루프를 돌려보자
let numberOfLegs = ["ant":6,"cheetah":4,"snake":0] // 데이터가 있는 Dictionary를 선언
for (animalName,legsCount) in numberOfLegs
{
    print("\(animalName) 's have \(legsCount) legs.")
}
//Swift에선 반복제어를 1...5 이런식으로 가능하다 index는 임시변수고 1...5에서의 숫자들과 매칭이 된다.
for index in 1...5
{
    print("\(index) times 5 is \(index*5)")
}
//한편으로 단순 반복제어를 하기위해서라면 _를 사용하는것을 권장한다.
for _ in 1...5
{
    print("hi")
}

let minutes = 60
//0..<variable의 스타일로 적으면 for(ini i=0;i<59;i++) 의 방식대로 진행
//이를 60까지 포함시키고 싶다면 0<minutes+1로 해야한다 <=는 지원하지않는듯하다
for tickMark in 0..<minutes+1{
    print(tickMark)
}

let minuteInterval = 5
// for(int i=0;i<60;i+=5) 이렇게 진행된다.
for tickMark in stride(from: 0, to: minutes, by: minuteInterval)
{
    print (tickMark)
}
//for(int i=0;i<=60;i+=5) 이렇게 진행된다. to 와 through의 차이를 잘 알고있자.
for tickMark in stride (from:0, through:minutes, by:minuteInterval)
{
    print(tickMark)
}

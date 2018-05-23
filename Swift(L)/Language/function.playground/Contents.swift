//: Playground - noun: a place where people can play
//함수의 선언은 기본적으로 func 키워드를 이용하여 선언
//기존 PL처럼 리턴과 매개변수의 데이터셋을 정의할 수 있다.
//(매개변수명:자료형) < -> 자료형> <>는 생략가능
//의 형태로 선언이 가능하다

import UIKit
// 이 함수는 매개변수도 없고 리턴도없다.
func sayhello()
{
    print("Hello") // 그냥 헬로우만 출력
}
sayhello()

func sayhello2(name:String) // 매개변수가 스트링형이고 리턴형은 존재하지않는 함수형
{
    print("Hello \(name)")
}

func sayhello3(name:String) -> String // 매개변수가 스트링형이고 리턴형도 스트링인 함수형
{
    return "Hello" + name // 스트링 형태로 hello name를 반환한다
}
print(sayhello3(name:"Park")) //반환된 스트링을 출력해준다. 여기선 Hello Park가 완성된다

func sayhello4(name:String = "Kim") // 매개변수가 스트링형이고 리턴형은 존재하지않는 함수형 하지만 기본적으로 kim으로 설정이 되어있음
{
    print("hello \(name)")
}
sayhello4() //아무것도 적지않으면 hello kim으로 기본으로 내장되어있는 kim이 출력되지만
sayhello4(name:"jeong") // 만약 매개변수로 jeong을 적으면 jeong이 출력된다.

// 매개변수의 모양을 호출시 다른 매개변수를 이용하여 선언도 가능하다
// insertYourName name : Stirng 이건 함수 내부에선 name으로 작동하는데 외부에선 insertYourName을 통해 받는다.
// internationalAge age : Int 이건 함수 내부에선 age로 작동하는데 외부에선 internationalAge로 받아들인다.
func sayhello5(insertYourName name: String, internationalAge age:Int)
{
    print("\(name) is \(age) years old.")
}
sayhello5(insertYourName: "Park", internationalAge: 21)

func sayhello6(_ name:String, _ age:Int) -> String{
    return "\(name) is \(age) years old."
}
print(sayhello6("Jeong", 26))

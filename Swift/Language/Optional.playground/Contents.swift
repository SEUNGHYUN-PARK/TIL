//: Playground - noun: a place where people can play

import UIKit
//optional을 사용하는 이유
//형변환을 하면 가끔가다 nil값이 형성되는 경우가 있다.
//nil은 애플리케이션작동에 큰 악영향을 주기때문에, nil값을 생성하지않는 방법을 줘야한다
//이를 위해 optional을 사용
let possibleNumber = "123" // 문자열 123을
let convertedNumber = Int(possibleNumber) // 정수형 123으로 변환 가능
print(convertedNumber!)

//하지만
let possibleNumber2 = "f" // 문자열 f을
var convertedNumber2 = Int(possibleNumber2) // 정수형으로 변경하면
print(convertedNumber2)//nil값이 형성된다.

if convertedNumber != nil {
    print(convertedNumber!)
}

//nil값을 만들지않기위해선 이런방법을 이용한다.
if let actualNumber = Int(possibleNumber) {
    print(actualNumber)
}

var serverResponseCode:Int? = 404 // 이렇게 선언하면 404가 들어가지만
serverResponseCode = nil // nil값으로 선언이 가능하다

print(serverResponseCode) // 하지만 강제적 unwrapping을 불가능하다 (nil값이기때문에)
//아직 정확한 개념은 모르겠지만... 보통 하나의 변수에 한 값만 들어갔었다면 Swift에서는 nil값에 대비해 하나의 변수에 두가지의 기능을 준거같다

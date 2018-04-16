//: Playground - noun: a place where people can play

import UIKit

// Swift에서 배열도 가변배열과 비가변배열 두개가 존재한다 (mutable, immutable)
// let을 이용하면 immutatable, var을 이용하면 mutable이다.
// 비가변배열이 속도는 빠르다. 하지만 수정할 수 없다는 단점이있다.

// mutable array
// 배열의 선언은 다음과 같다. 흔히 C++,Java에서 선언해주듯 이용하는 방법이 있고,
// 그냥 []안에 자료형을 넣는 방법도 있다.
var emptyArray = Array<String>()
var emptyArray2 = [String]()

print(emptyArray) //두 배열 모두 비어있기때문에 []라는 결과만 출력된다.
print(emptyArray2)

//배열에 데이터를 추가하는 방법은 두가지가 있다. 하나는 append를 이용하는 방법이 있고,
// +=를 이용하는 방법이 있다.
emptyArray.append("Hello")
emptyArray.append("world")
print(emptyArray)
emptyArray2 += ["a"]
emptyArray2 += ["b"]
emptyArray2 += ["c"]
print(emptyArray2)

//배열 선언시, 빈 배열이 아닌 데이터가 있는 배열 선언도 가능하다.
var emptyArray3 = ["Anna","Jason","Brian","Jack"]
emptyArray3 += ["Mark"]
emptyArray3 += ["Bob"]
emptyArray3 += ["Kelly"]

print(emptyArray3)
print(emptyArray3.count) // 배열의 갯수를 출력할 수 있다.
emptyArray3[6]="Jane" // 참조인덱스를 정해서 값 변경이 가능하다.
print(emptyArray3[6]) // 참조인덱스를 정해서 출력할 수 있다.
//print(emptyArray3[7]) // 참조범위를 넘기면 에러가 뜬다.
emptyArray3[0...4] = ["A","B","C","D","E"] // 이렇게 배열안의 숫자의 범위를 이용하여 값을 변경할 수 있다.
print(emptyArray3)

//배열선언을 두가지방법으로 할 수 있다했다. 좀 전의 방식은 가변이었다
//이번엔 비가변(immutable)의 방식으로 진행해보자
let emptyArray4 = ["Q","Q","E","R","T","Y"]
//emptyArray4[1]="W" // let으로 고정배열을 선언했기때문에, W로 변경할 수 없다.
print(emptyArray4)




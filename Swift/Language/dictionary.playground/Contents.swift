//: Playground - noun: a place where people can play

import UIKit
// 딕셔너리는 C++의 map과 유사하다.
// 이 또한 key:value를 이용하여 데이터를 관리한다.
//mutable immutable로 나뉘어 선언할 수 있다.

//mutable 가변 딕셔너리는 var키워드를 이용하여 선언
//빈 딕셔너리는 그냥 자료형만 선언해주면된다.
var emptyDictionary = Dictionary<String,Int>()
var emptyDictionary2 = [String:Int]()

if emptyDictionary.isEmpty
{
    print("nothing in dictionary")
}
print(emptyDictionary2.count)

//데이터 추가 방식이 좀 독특한거같다.
//그냥 넣고 싶은 데이터의 키값 = value로 정하면됨.
emptyDictionary["ant"] = 6
emptyDictionary["snake"] = 0
emptyDictionary2["Lion"] = 4
print(emptyDictionary)
print(emptyDictionary2)
print(emptyDictionary.count)
print(emptyDictionary2.count)

//데이터가 있는 딕셔너리를 선언시에는 키 : 밸류값을 ,로 이어서 연결해주면된다.
var emptyDictionary3 = ["ant":6,"spider":10,"tiger":4]
emptyDictionary3["human"]=2
emptyDictionary3["spider"]=8
print(emptyDictionary3)
print(emptyDictionary3["tiger"]!) // !는 나중에 배운대...

//immutable dictionary 정적 딕셔너리
let adictionary=["ant":6,"spider":10,"tiger":4]
//adictionary["spider"]=9 // let키워드인 정적을 선언해줬으므로 에러
print(adictionary)


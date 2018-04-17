//: Playground - noun: a place where people can play

import UIKit
//Swift에서는 구조체를 사용할 수 있다.
//여러 변수를 선언하는거보다 하나의 구조체를 통해 엮어줄수있다.

//Ex
var name = ["Park","Jeong","Lim","Ko"]
var age = [3,4,5,6]
var height = [40,50,60,70]

print(name[0],age[0],height[0])
// 이랬을 때 굉장히 읽기 싫어진다..
// 구조체를 이용하면 데이터 관리가 용이해진다.
struct Person
{
    var name : String
    var age : Int
    var height : Int
}
var student1 = Person(name:"Park",age:3,height:40)
var student2 = Person(name:"Lim",age:5,height:50)

print(student1.age,student1.name,student1.height)

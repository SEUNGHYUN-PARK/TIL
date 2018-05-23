//: Playground - noun: a place where people can play

import UIKit
//변수 자체에 개행문자를 넣어서 개행을 할 수 있다.
var str = "Hello, playground. \nnice to meeting you.\n\"I am beginner in swift\""
print(str);
print("========================")
//""" """안에선 개행문자를 작성하지않고도 개행을 할 수 있다.
var str2 = """
Hello, playground.
nice to meet you.
"I am beginner in swift"
"""
print(str2)
print("")

//스트링 변수선언은 다음과같이 진행한다.
var emptystring = "" // 그냥 큰따옴표 두개 이용해서 선언할 수 있고
var anotherEmptyString = String() // 스트링 객체 형성 하듯 선언할 수 있다.

if emptystring.isEmpty // .isEmpty 메소드를 이용하면 문자열이 비어있는 문자열인지아닌지 알 수 있다.
{
    print("Nothing to see here")
}
if anotherEmptyString.isEmpty // swift에선, if에 괄호를 쓰지않는다
{
    print("Nothing to see here")
}

print()
// 상수는 변경 불가능
let lstr = "Hello"
let lstr2 = " there"

var welcome = lstr+lstr2 // string concatnate는 +을 통해 할 수 있다
print(welcome)
var instruction = "look over"
instruction+=lstr2 // look over there
print(instruction) // look over there
print(instruction.count) // 스트링의 문자 띄어쓰기와 글자의 갯수를 반환하는 .count

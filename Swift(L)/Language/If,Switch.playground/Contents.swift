//: Playground - noun: a place where people can play

import UIKit
// 그냥 똑같이 적용하면 되는듯 하다
let age = 7
if age < 3
{
    print("Baby")
}
else if age < 20
{
    print("child")
}
else
{
    print("adult")
}
//하지만 스위치에서 약간의 차이가 있다
switch age {
//case -1: // 기존 C/Java언어에서는 스위치에 break를 사용하기때문에 연달아서 case : 를 적용시킬수있었지만 여기서는 안된다.
//따라서 만약 사용하고 싶으면 아래 3,4,5,6같이 ,로 연결시켜주면된다.
case 0...2:
    print("baby")
case 3,4,5,6:
    print("toddler")
case 7...19:
    print("child")
default:
    print("adult")
}

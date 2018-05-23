//: Playground - noun: a place where people can play

import UIKit

//Swift에서도 객체지향을 지원한다
//클래스를 선언하고 싶을땐 class 키워드를 붙여주면 된다.
class Vehicle
{
    var currentSpeed = 0.0 // stored property
    var description : String{
        return "Traveling at \(currentSpeed) miles per hour"
    }
    func makeNoise()
    {
        print("noiseless")
    }
} // 기존의 C++방식과는 다르게 ;를 붙여주지 않는다.

let somevehicle = Vehicle() // somevehicle객체를 선언해준다.
somevehicle.currentSpeed=80.0 // 생성된 객체의 속도를 80으로 올려준다
print(somevehicle.currentSpeed) // 객체의 현재 속도값을 접근하여 출력해준다.

//Swift에서는 상속도 지원한다. // 하지만 다중상속은 지원하지않음
class Bicycle : Vehicle // 자바는 extends, C++에서 : 처럼 :을 사용한다
{
    //여기에 var currentSpeed라고 따로 선언해주면 표현이 모호하다는 빨간줄이 뜬다
    var hasBasket = false
}
let someBicycle = Bicycle()
someBicycle.currentSpeed = 20.0
someBicycle.hasBasket=true
print(someBicycle.hasBasket)
print(someBicycle.currentSpeed)

//오버라이드도 가능하다
class Tandem : Bicycle{
    var currentNumberOfPassengers = 0
    //변수의 오버라이딩도 가능하고
    override var description: String{
        return "Traveling at \(currentSpeed) miles per hour, number of Passenger \(currentNumberOfPassengers)"
    }
}
let someTandem = Tandem()
someTandem.currentNumberOfPassengers = 50
someTandem.hasBasket = true
someTandem.currentSpeed = 30
print(someTandem.description)

class Train:Vehicle
{
    //함수의 오버라이딩도 가능하다 여기선 메소드
    override func makeNoise() {
        print("Choo Choo")
    }
}
let someTrain = Train()
someTrain.makeNoise()

class Car:Vehicle
{
    var gear=1
    override init() // 이미 모든 클래스 선언에는 init이 내장되어있다 따라서 생성자에도 override를 사용해야한다.
    {
        print("Car")
    }
    init(newGear:Int) // 이렇게 생성자를 또 오버라이딩할 수 있다.
    {
        gear = newGear
    }
}

let someCar = Car()
let someCar2 = Car(newGear: 5)
print(someCar.gear)
print(someCar2.gear)

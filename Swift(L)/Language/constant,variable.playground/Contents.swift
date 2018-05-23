//: Playground - noun: a place where people can play
//Auto Run을 하면 소스 작성중에 다운되는 현상이 있어서 Manually Run사용
//단축키는 알아서 설정
//;은 안쓴다
import UIKit

//상수는 let 키워드를 사용하고, 변수는 var 키워드를 사용
//변수선언시 두가지 형태가 있음
//Type Annotation, Type Inference => 데이터의 선언유무
/////////////////////////////////////////////////
//Type Inference 굳이 자료형을 설정하지않아도 데이터의 자료형이 정해짐
var str = "Hello, playground"
print("Type Inference") // 개행문자가 섞여있음, 차후 띄우지않는 방법도 생각해봐야할듯
print("str type : \(type(of:str))") // 문장중간에 메소드?를 넣고싶으면 \을 추가
print("str : " + str) // 이런식으로도 출력이 가능 스트링은 +
print("str : \(str)")
str = "Hello World!" // 중간에 변수값 바꾸는것도 허용되고
print("str : " + str)
print(); //; 넣어도 무방한거같다..

var version = 1.0
version = version+2 // 값을 3으로 수정
print("version type : \(type(of:version))") // 더블형 자료형 출력
print("version : " , version+2)// 3.0+2 = 5.0 하지만 이전 스트링과는다르게 ,를 사용
print(version) // 값자체가 바뀐게 아니기 때문에 그냥 3
print("R_slash test : \(version+2)") // //임시로 값을 변환해준거기떄문에 5
print("R_slash test : \(print(version=version+2))")
        //\() 먼저 실행한다음 전체괄호를 진행 에러 안뜬게 신기... 하지만 결과 출력안됨
print(version) // 근데 신기한게도 괄호안에 version = version+2가 적용이 되었음 5.0이 출력
print("\n")

//////////////////////////////////////////////////
//Type Annotation : 기존의 방식인 데이터를 처리한 방법
print("Type Annotation")
var a_str:String = "Hello annotation" // String Double Int 전부 앞글자는 대문자를 쓰는듯하다
print(a_str)
a_str = "Hello swift"
print(a_str)
print("type a_str : " , type(of:a_str))
print("type a_str : \(type(of:a_str))")
print()

var num2:Int = 123456
print(num2)
print(num2/num2)
num2=num2+654321
print(num2)
print("type num2 : \(type(of:num2))")
print("type num2 :",type(of: num2))
print(num2=num2+111111) //추론인데 연산과정이 있으면 출력을 안하는듯
print(num2)
print()

var boolean:Bool = true
print(boolean)
boolean = false
print(boolean)
print("boolean : \(type(of:boolean))")
print()

var num3:Double = 123456.1
print(num3)
print(num3/num3)
num3=num3+654321.9
print(num3)
print("type num2 : \(type(of:num3))")
print("type num2 :",type(of: num3))
print(num3=num3+111111) //추론인데 연산과정이 있으면 출력을 안하는듯
print(num3)
print()


//상수선언은 let 키워드를 사용하며 숫자 변경이 불가능
let year = 2015;
let handsome = true;
print("year : \(type(of: year))")
print("handsome : \(type(of:handsome))")
//year = year+1 이렇게하면 에러메세지 Cannot assign to value: 'year' is a 'let' constant 가 뜬다
//고치지말라는건 안고치는게 좋은거같다.



//이외 추가사항
//유니코드기때문에 이모티콘같은걸로 변수설정이 가능 하지만 안하는걸 추천
//let 🐶🐮 = "dogcow"//빨간줄안뜸
//한줄주석은 // 여러줄 주석은 cmd+/
//print("str : \(type(of:str))")
//print(str)

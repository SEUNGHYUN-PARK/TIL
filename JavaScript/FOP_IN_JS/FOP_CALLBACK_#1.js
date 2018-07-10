//자바스크립트에서는 함수도 객체다 -> 일종의 값

fucntion a() {} // 이 함수는 a라는 자바스크립트 변수에 담겨진 일종의 값
var a = function (){} //이는 function a (){}와 같다.

a={
  b:function(){
    // 함수는 값이고 객체 안에 저장이 가능
    // b:key function():value
    // 객체 안에 저장된 값을 속성(property)라 하며
    // 객체 안에 저장된 함수를 메소드(method)라고 칭한다.
  }
}

//함수는 값이기 때문에 다른 함수의 인자로 전달 될 수도 있디.
function cal(func, num) // 함수의 이름과 변수를 매개변수로 받으면
{
  return func(num) // 또다른 함수로 리턴한다
}
function increase(num)
{
  return num+1
}
function decrease(num)
{
  return num-1
}
alert(cal(increase,1));
alert(cal(decrease,1));

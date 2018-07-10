//함수를 리턴값으로 사용이 가능

function cal(mode)
{
  var funcs={
    'plus': function(left,right){return left+right},
    'minus': function(left,right){return left-right}
  }
  return funcs[mode]; // 반환값으로 함수를 사용할 수 있다.
}
alert (cal('plus')(3,5))  //8출력
alert (cal('minus')(5,3)) //2출력


//함수를 배열의 값으로 사용이 가능하다.

var process = [
    function(input){return input+10;},
    function(input){return input*input;},
    function(input){return input/2}
];

var input=1;
for(var i=0;i<process.length;i++)
{
  input=process[i](input);
  //11,121,60.5
}
alert(input); //60.5출력

//fisrt-class citizen
//함수가 변수 매개변수, 리턴값등 다양한 데이터형태로 사용이 가능할 떄는
//first-class citizen이라하고 자바스크립트에서는 함수는 first-class citizen이다.

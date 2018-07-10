(
function(){
  var myapp={}
myapp.calculator ={
  'left':null,'right':null
}
myapp.coordinate ={
  'left':null,'right':null
}
myapp.calculator.left=10;
myapp.calculator.right=20;

function sum()
{
  return myapp.calculator.left+myapp.calculator.right;
}
document.write(sum());
}()
) // 전역변수형태가 아닌 선언과 함께 바로 사용하는건 익명함수라함

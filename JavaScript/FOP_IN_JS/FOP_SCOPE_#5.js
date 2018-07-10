var i=5;

function a()
{
  var i=10; // 이 지역변수는 a함수안에있을때만 유효
  b();
}
function b()
{
  document.write(i); //  따라서 전역변수 5의 값을 갖는 i가 출력된다.
}

a();

var gscope = 'global' // 전역변수
function fscope()
{
    var lscope = 'local' // 지역변수
    var lv = 'local variables';
    alert(lscope);
    alert(gscope);
    alert(lv);
}
fscope();
alert(lv); // 작동불능

function a()
{
  var i=-1; // 무한루프를 돌지않기위해서는 다음과 같이 선언해야한다 // 실은 지역변수라서 아무역할도 못함
  //i=0;
}

for(var i=0;i<10;i++)
{
  a(); // 실행될떄마다 i가 0이되고 결과상으로 무한루프를 돈다
  document.write(i);
}

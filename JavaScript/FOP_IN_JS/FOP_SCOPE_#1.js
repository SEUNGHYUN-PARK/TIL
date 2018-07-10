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

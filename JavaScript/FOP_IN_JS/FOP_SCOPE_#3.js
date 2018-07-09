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

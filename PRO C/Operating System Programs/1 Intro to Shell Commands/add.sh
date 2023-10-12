echo Enter two numbers:
read num1 num2
res=`expr $num1 + $num2` # ((c = $num1 + $num2))
echo Addition = $res

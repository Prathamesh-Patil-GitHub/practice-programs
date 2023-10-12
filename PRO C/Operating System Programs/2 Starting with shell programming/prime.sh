echo Enter the number
read n
m=`expr $n / 2`
flag=0
i=2
while [ $i -le $m ]
do
	rem=` expr $n % $i`
	if [ $rem -eq 0 ]
	then
		flag=1
		break
	fi
	i=`expr $i + 1`
done
if [ $flag -eq 1 -o $n -eq 1 ]
then
	echo $n is not a prime number.
else
	echo $n is a prime number.
fi

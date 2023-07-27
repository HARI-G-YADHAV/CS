echo "Enter the no: " 
read n1 n2 n3
if ((n1>n2 && n1>n3))
then
	echo $n1
elif ((n2>n1 && n2>n3))
then
	echo $n2
else
	echo $n3
fi


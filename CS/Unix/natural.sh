#using for loop
for ((i=1;i<=99;i+=2))
do 
	echo "$i"
done

echo "***************"
#using while loop
i=1
while((i<=99))
do
	echo "$i"
	((i = i+2))
done
	

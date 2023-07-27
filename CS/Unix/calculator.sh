#calculator
echo "calculator"
echo "------------------------"
echo "1 for add"
echo "2 for sub"
echo "3 for mul"
echo "4 for div"
echo "------------------------"

echo "Enter first numbers"
read n1
echo "Enter second number"
read n2
echo "Enter choice"
read choice

case $choice in
1) ((result = $n1 + $n2 ))
   echo "$result";;
2) ((result = $n1 - $n2 ))
   echo "$result";;
3) ((result = $n1 * $n2 ))
   echo "$result";;
4) ((result = $n1 / $n2 ))
   echo "$result";;    
esac

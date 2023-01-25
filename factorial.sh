echo "enter a number"
read a 
s=1
while [ $a -ne 0 ]
do
s=$((s*a))
a=$((a-1))
done
echo "factorial is $s"
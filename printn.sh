echo "enter a number"
read a
echo "the n numbers are"
c=0
while [ $c -le $a ]
do
echo $c
c=$((c+1))
done
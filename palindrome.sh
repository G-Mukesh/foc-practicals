#!/usr/bin/bash
echo "enter a number"
read num
s=0
rev=""
a=$num
while [ $a -gt 0 ]
do
s=$(($a%10))
a=$(($a/10))
rev=$( echo ${rev}${s} )
done
if [ $num -eq $rev ]
then
echo "Given number is a palindrome"
else
echo "given number is not a paindrome"
fi
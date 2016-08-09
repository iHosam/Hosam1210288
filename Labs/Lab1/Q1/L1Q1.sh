#!/bin/bash


#Q1: Create a shell script file that asks the user for three inputs ( first number,
#operation, second number ) then prints the result of the operation. The possible
#operations are ( add, subtract, multiply, divide ).

#This shell program will ask for two integers and can do sum,subtract,divide and multiply them
#this shell program dont output floating numbers

clear
echo "Enter first integer"
read num1
echo "Enter second integer"
read num2

operation='Choose subtract / multiply / division'
select opera in $operation
do
case $opera in
"add") echo "summation =" $((num1+num2));;
"subtract") echo "subtraction =" $((num1-num2));;
"multiply") echo "multiplication =" $((num1*num2));;
"division") echo "division =" $((num1/num2));;
esac
done

#!/bin/bash


# Q2: Create a shell script file that iterate drawing shapes in the terminal. The
# script takes two inputs passed by argument from the terminal ( i.e. $1 and $2 ),
# the first argument ( $1 ) is the shape selection while the second argument ( $2 )
# is the number of iteration.

# This shell program will ask for two integers and do
# sum,subtract,divide and multiply them
# this shell program dont output floating numbers

echo "Enter first integer"
read num1
echo "Enter second integer"
read num2
echo "summation =" $((num1+num2))
echo "subtraction =" $((num1-num2))
echo "multiplication =" $((num1*num2))
echo "division =" $((num1/num2))

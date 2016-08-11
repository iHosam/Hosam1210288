#!/bin/bash


# Q2: Create a shell script file that iterate drawing shapes in the terminal. The
# script takes two inputs passed by argument from the terminal ( i.e. $1 and $2 ),
# the first argument ( $1 ) is the shape selection while the second argument ( $2 )
# is the number of iteration.

# This shell script will ask for one integers and it
# will draw the respective shape next to that number

echo "Available shapes :"
echo "1: Square     2: Rectangle"
echo "3: Circle     4: Triangle"
echo "---------------------------"
echo "Enter your choice number : "
read choice
echo ""

case $choice in
1) echo "xxxxx"
   echo "xxxxx"
   echo "xxxxx";;
2) echo "xxxxxxxxxxx"
   echo "xxxxxxxxxxx"
   echo "xxxxxxxxxxx";;
3) echo "     xx"
   echo "   xxxxxx"
   echo " xxxxxxxxxx"
   echo " xxxxxxxxxx"
   echo "   xxxxxx"
   echo "     xx";;
4) echo "    x"
   echo "   xxx"
   echo "  xxxxx"
   echo " xxxxxxx"
   echo "xxxxxxxxx";;
esac
echo ""

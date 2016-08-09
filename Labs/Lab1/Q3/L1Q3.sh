#!/bin/bash


#Q3: Create a shell script file that asks the user to enter 10 random integers then
#the script finds the largest integer.

# This shell program take 10 integer as input from
# user and find out the largest integer from them.

#!/bin/bash

#taking input from user
for((i=0;i<10;i++)) 
do
echo " enter number $((i+1)) "
read nos[$i]
done

#printing the entered number
echo "number entered is"
for((i=0;i<n;i++))
do
echo ${nos[$i]}
done
#main loop
greatest=${nos[0]}
for((i=0;i<n;i++))
do
#logic for greatest number
elif [ ${nos[$i]} -gt $greatest ]; then
greatest=${nos[$i]}
fi
done
#printing smallest and greatest number
echo "greatest number in this group is $greatest"
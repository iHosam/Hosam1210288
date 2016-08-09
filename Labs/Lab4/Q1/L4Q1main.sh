#!/bin/bash

# EE-463 Operating Systems
# Name: Hosam Al-Haythami
# ID: 1210288
# 
# Q1: Write a shell script that creates 5 concurrent processes each one prints its
# process identification number (PID).

#------------------------------------------
# L4Q1main.sh
# This shell script will create
# 5 concurrent process and it
# will print its PID
#------------------------------------------

echo "I'm the main process and my PID is $$"
bash ./anotherProcess.sh &
bash ./anotherProcess.sh &
bash ./anotherProcess.sh &
bash ./anotherProcess.sh &
bash ./anotherProcess.sh &
wait	#wait for all process
printf "\n\nAll sub-process had done its execution\n"


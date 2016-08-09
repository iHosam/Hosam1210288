/////////////////////////////////
//*
//* EE-463 Operating Systems
//* Name: Hosam Al-Haythami
//* ID: 1210288
//* 
//* Q2: Write C program protected from termination and handle the termination
//* signal by a handler which prints a message on screen says "Sorry, you cannot use
//* Control-C keys”.
//
//////////////////////////////////

#include <stdio.h>
#include <signal.h>

main(){
	__sighandler_t oldHandler;
	printf("Try to press Ctrl-C\n");

	sleep(10);
	oldHandler = signal(SIGINT,SIG_IGN);
	printf("This process is protected from termination\n");

	sleep(10);
	signal(SIGINT,oldHandler);
	printf("This process is not protected from termination\n");

	sleep(2);
	printf("Good bye\n");
}
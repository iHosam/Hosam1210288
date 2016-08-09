/////////////////////////////////
//*
//* EE-463 Operating Systems
//* Name: Hosam Al-Haythami
//* ID: 1210288
//* 
//* Q1: Write C program perform a dialog between parent and its child by using
//* pipes method (e.g. the parent ask a question and the child answer it).
//
//////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	int a[2], b[2], bytesread;
	char message1 [100], message2 [100];
	pipe(a); // declaration of the first pipe.
	pipe(b); // declaration of the first pipe.
	if(fork()){ /* Parent */
		char* phrase1="Hello, How old are you?";
		close (a[0]); // close read end of the first pipe.
		write (a[1],phrase1,strlen(phrase1)+1); // write to write end of the first pipe.
		close (a[1]); // close write end of the first pipe.
		wait(); //wait until child process finish.
		close (b[1]); // close write end of the second pipe.
		bytesread = read (b[0],message2,100); // read from read end of the second pipe.
		printf ("Child: %s\n",bytesread,message2);
		close (b[0]); // close read end of the second pipe.
	}
	else { /* Child */
		close (a[1]); // close write end of the first pipe.
		bytesread = read (a[0],message1,100); // read from read end of the first pipe.
		printf ("Parent: %s\n",bytesread,message1);
		close (a[0]); // close read end of the first pipe.
		close (b[0]); // close read end of the second pipe.
		char* phrase2 = "Hi, I'm 24 years old";
		write (b[1],phrase2,strlen(phrase2)+1); // write to write end of the second pipe.
		close (b[1]); // close write end of the second pipe.
	}

}
/*
 * Name: Hosam Al-Haythami		ID:1210288
 * Course: Operating Systems EE-463
 *
 * Q2: Write C program that creates 2 children, each one creates one child, all
 * processes must print their process identification number (PID) as well as their
 * parent process identification number (PPID).
 *---------------------------------------------------------
 * This c code will create a child process
 * for a child process and each will print
 * its PID.
 *----------------------------------------------------------
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	/*
	 * pp is the parent process
	 * cp is the child process of pp (parent)
	 * cpp is the child process of cp (child of child of parent)
	 */
	pid_t pp,cp,ccp;

	if(fork()){
		pp=getpid();
		printf("I am parent process and my PID=%d\n",pp);
		wait();	//wait for all sub-prcesses to finish and print this
		printf("\n\nAll child process had finished its execution, Parent exiting\n");
	}else{
		if(fork()){
			cp=getpid();
			printf("I am child process and my PID=%d\n",cp);
			wait();	//waits for the child to finish its execution
		}else{
			ccp=getpid();
			printf("I am a child of the child and my PID=%d\n",ccp);
		}

	}
	return 0;
}

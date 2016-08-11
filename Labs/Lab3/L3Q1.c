////////////////////////////////
/*
 * EE-463 Operating Systems
 * Name: Hosam Al-Haythami
 * ID: 1210288
 * 
 * Q1
 * Create a function in (.c) file and create its header in (.h) file, 
 * in a new separate (.c) file create your main program, then use 
 * separate-compilation to compile the program (i.e. create a MakeFile).   
 *     Function: ask the user for an integer and check for errors entered.  
 *     Main Program: compute factorial and print the results. 
 */
//////////////////////////////////


#include<stdio.h>
#include<Header.h>

int getInteger(void) {
	int input;
	int returnValue = 0;
	printf("\nThis program will take an integer and\n");
	printf("compute its factorial.");
	while(!returnValue) {
		printf("\nPlease Enter an integer : ");
		returnValue = scanf("%d", &input);
		while(getchar() != '\n');
	}
	return input;
}
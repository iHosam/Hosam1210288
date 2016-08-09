 /////////////////////////////////
 /*
 * EE-463 Operating Systems
 * Name: Hosam Al-Haythami
 * ID: 1210288
 * 
 * Q4
 * Write C program for 3 inputs ( A , B , C ) and finds the maximum and minimum
 * numbers plus calculate the average ( max , min , avg ).
 */
 //////////////////////////////////

#include <stdio.h>

int main(){
	int a,b,c,max,min,avg;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	printf("Enter the third number: ");
	scanf("%d",&c);

	max = a;
	min = a;

	if(a>b){
		min=b;
	}else{
		max=b;
	}
	if(a>c){
		min=c;
	}else{
		max=c;
	}
	if(b>c){
		min=c;
	}else{
		max=c;
	}
	avg=(a+b+c)/3;

	printf("Max: %d, Min: %d, Avg: %d",max,min,avg);

	return 0;
}

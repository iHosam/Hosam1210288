 /////////////////////////////////
 /*
 * EE-463 Operating Systems
 * Name: Hosam Al-Haythami
 * ID: 1210288
 * 
 * Q5
 * Write C program the prints grades of 10 students along with their names
 * from a predefined array.
 */
//////////////////////////////////

#include <stdio.h>

struct student{
	char name[10];
	int grade;
};

int main(){
	struct student st[10];
	int i;

	strcpy(&st[0].name,"Ahmed");
	strcpy(&st[0].grade,90);

	strcpy(&st[1].name,"Ayman");
	strcpy(&st[1].grade,85);

	strcpy(&st[2].name,"Badr");
	strcpy(&st[2].grade,77);

	strcpy(&st[3].name,"Bandar");
	strcpy(&st[3].grade,80);

	strcpy(&st[4].name,"Emad");
	strcpy(&st[4].grade,94);

	strcpy(&st[5].name,"Fawaz");
	strcpy(&st[5].grade,"70");

	strcpy(&st[6].name,"Fouad");
	strcpy(&st[6].grade,72);

	strcpy(&st[7].name,"Hani");
	strcpy(&st[7].grade,95);

	strcpy(&st[8].name,"Jalal");
	strcpy(&st[8].grade,85);

	strcpy(&st[9].name,"Zyad");
	strcpy(&st[9].grade,60);

	for(i=0;i<10;i++){
		printf("Name: %s, grade: %c\n",&st[i].name,st[i].grade);
	}

	return 0;
}

#include<stdio.h>
int main ()
{
	double english, cprogram, maths, microp, account, totalmarks, percentage, gpa;
	
	int rollno;
	char name[50], faculty[50], email[50], result[50];
	char gender;
	
	printf("enter your rollno\n");
	scanf("%d", & rollno);
	printf("enter your name\n");
	scanf("%s", & name);
	printf("enter your faculty\n");
	scanf("%s", & faculty);
	printf("enter your email\n");
	scanf("%s", & email);
	printf("enter your gender\n");
	scanf(" %c", & gender);
	printf("enter your subject marks\n");
	printf("1. English\n 2. Maths\n 3.Cprogram 4. Microp 5. Account ")
	
	printf("My details /n ");
	printf("Rollno= %d", rollno);
	printf("Name= %s", name);
	printf("Faculty= %s", faculty);
	printf("Hobbies= %s", hobbies);
	printf("Email= %s", email);
	printf("Gender= %c", gender);
	
	return 0;
}

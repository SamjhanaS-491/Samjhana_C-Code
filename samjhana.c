#include <stdio.h>
#include <math.h>
int main()
{
	int rollno;
	double maths, account, nepali, microp, cprogramming, totalmarks, percentage;
	char name[50], faculty[50], email[50], gender[50]; 
	
	printf("enter your rollno: \n");
	scanf("%d", &rollno);
	
	printf("enter your name: \n");
	scanf("%s", &name);
	
	printf("enter your faculty: \n");
	scanf("%s", &faculty);
	
	printf("enter your email: \n");
	scanf("%s", &email);
	
	printf("enter your gender: \n");
	scanf("%s", &gender);
	 
	 printf("enter the marks of subjects: \n");
	 printf("1. Maths\n 2. Account\n 3. Nepali\n 4. Microp\n 5.Cprogramming\n" );
	 sacnf("%lf%lf%lf%lf%lf", &maths, &account, &nepali, &microp, &cprogramming);
	 
	 totalmarks= maths+account+nepali+microp+cprogramming;
	 percentage= (totalmarks/500.0)*100;
	 
	 printf("student name: %s", name);
	 printf("\n");
	 printf("student rollno: %d",  rollno);
	 printf("\n");
	 printf("student faculty: %s", faculty);
	 printf("\n");
	 printf("student email: %s", email);
	 printf("\n");
	 printf("student gender: %s", gender);
	 printf("\n");
	 printf("total marks: %lf", totalmarks);
	 printf("\n");
	 printf("percentage: %lf", percentage);
	 printf("\n");
	 
	 if((maths<24)||(account<24)||(nepali<24)||(microp<24)||(cprogramming<24))	
	 {
	 	printf("result status: failed");
	 	printf("\n");
	 }
	 
	  else
	  
	  { 
	  printf("result status: passed");
	  printf("\n");
	   } 
	  return 0;
} 

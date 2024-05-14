//Q.2 Write a C Program to find gross salary by adding % of HRA, DA, and TA of user choice.
//For example,
//Input:
//Base Salary: 100
//HRA=10
//DA=5
//TA=8
//
//Output: 
//Rs. 123

#include<stdio.h>
main(){
	
	int  Salary , HRA , DA , TA , grows;
	
	printf("Enter Your Salary:");
	scanf("%d",&Salary);
	
	HRA=(10*100)/Salary;
	DA =(5*100)/Salary;
	TA =(8*100)/Salary;
	
	grows= Salary + HRA + DA + TA;
	
	printf("Your grows salary is %d",grows);
	
}

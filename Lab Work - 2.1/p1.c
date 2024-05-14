//Q.1 Write a Program to perform all arithmetic operators such as +, -, *, / and %
//
//For example,
//Output:
//
//Addition of 12 and 6 is 18
//Subtraction of 12 and 6 is 6
//Multiplication of 12 and 6 is 72
//Division of 12 and 6 is 2
//Modulo of 12 and 6 is 0
//
//12 + 6 = 18
//12 - 6 = 6
//12 * 6 = 72
//12 / 6 = 2
//12 % 6 = 0

#include<stdio.h>
main()
{
	int a,b;
	int Addition,Subtraction,Multiplication,Division,Modulo;

	printf("Enter Any Number: ",a);
	scanf("%d",&a);
    printf("Enter Any Number: ",b);
	scanf("%d",&b);

	printf("\n");

	printf("Addition of %d and %d is %d\n", a, b, a + b);
	printf("Subtraction of %d and %d is %d\n", a, b, a - b);
	printf("Multiplication of %d and %d is %d\n", a, b, a * b);
	printf("Division of %d and %d is %d\n", a, b, a / b);
	printf("Modulo of %d and %d is %d\n", a, b, a % b);

	printf("\n");

	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d = %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n", a, b, a%b);

}

//Q.1 Write a Program to find the maximum number from the given 3 numbers using the ternary operator.
//For example,
//Input:
//Enter a value of the first number: 8
//Enter a value of the second number: 3
//Enter a value of the third number: 12
//
//Output:
//The 
//
//maximum  value is: 12

#include<stdio.h>
main(){
	int a,b,c;

	printf("Enter a value of the first number:");
	scanf("%d",&a);
	printf("Enter a value of the second number: ");
	scanf("%d",&b);
	printf("Enter a value of the third number: ");
	scanf("%d",&c);

	(a>b)   

	?((a>c)

			?(printf("/maximum  value is: %d",a))
			      :((printf("/maximum  value is: %d",c))))

			:((b>c)
				?(printf("/maximum  value is:%d",b))
					:((printf("T/maximum  value is: %d",c))));

}

//Q.5 Write C Program to print multiplication table without using any loop.
//For example,
//Input:
//Enter any Number : 10
//
//Output:
//10 * 1 = 10
//10 * 2 = 20
//10 * 3 = 30
//10 * 4 = 40
//10 * 5 = 50
//10 * 6 = 60
//10 * 7 = 70
//10 * 8 = 80
//10 * 9 = 90
//10 * 10 = 100

#include<stdio.h>
void main()
{
    int i,a,ans;
    
    printf("enter no for print table:-");
    scanf("%d",&a);
    
    for(i=1;i<=10;i++){
	     ans=a*i;
	     printf("%d * %d = %d\n",a,i,ans);
    }
}

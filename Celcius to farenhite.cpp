#include<stdio.h>
//calculate sum multi divid modo
main ()
{
	int a,b;
	int sum,multi,divi,modo;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	sum =a+b;
	printf("the sum of two numbers is %d\n",sum);

	multi =a*b;
	printf("multi is %d\n",multi);
	
	divi =a/b;
	printf("divi is %d\n");
	
	modo =a%b;
	printf("the modo is %d\n",modo);
}

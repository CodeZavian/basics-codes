#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d",&a);
    printf("enter two numbers\n");
    scanf("%d",&b);
    printf("enter two numbers\n");
    scanf("%d",&c);
    if (a == b && b != c)
    {
    	 printf("ist and second values are equal");
	}
	else if (a == c && a != b)
	{
		printf("ist and third values are equal");
	}
	else if (b == c && b != a)
	{
		printf("second and third values are equal");
	}
	else if (a == b && a == c)
	{
		printf("all values are equal");
	}
	else {
		printf("no values are equal");
	}
}

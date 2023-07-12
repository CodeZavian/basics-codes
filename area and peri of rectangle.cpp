#include<stdio.h>
#include<math.h>
main ()
{
	float area,perimeter;
	float length,width;
	printf("enter the length of rectangle\n");
	scanf("%f",&length);
	printf("enter the width of rectangle\n");
	scanf("%f",&width);
	area = length*width;
	printf("area of rectangle : %f\n",area);
	printf("enter the length of rectangle\n");
	scanf("%f",&length);
	printf("enter the width of rectangle\n");
	scanf("%f",&width);
	perimeter = 2*length+width;
	printf("perimeter of rectangle : %f",perimeter);
	
	
}
